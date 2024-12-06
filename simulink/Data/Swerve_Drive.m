%% Joystick Command Profiling
% Absolute Steering Circular Deadband
% Steering_Abs_Deadband_Range = 0.7;

% modulation curve 
temp_x = [0.3 0.35  0.4 0.45 0.5  0.6  0.7  0.8 0.9  1.0];
temp_y = [0.0 0.01 0.04 0.06 0.09 0.14 0.18 0.31 0.58 1.0];
%figure(1), clf, plot(temp_x,temp_y,'-o'), grid on
% figure(2), clf, plot([-fliplr(temp_x) 0 temp_x],[-fliplr(temp_y) 0 temp_y],'-o'), grid on

Steering_Mod_Drv_in = [-fliplr(temp_x) 0 temp_x];
Steering_Mod_Drv_out = [-fliplr(temp_y) 0 temp_y];

temp_x = [0.05 0.15  0.25 0.4 0.5  0.6  0.7  0.8 0.9  1.0];
temp_y = [0.0 0.015 0.04 0.10 0.17 0.27 0.40 0.55 0.75 1.0];
% figure(1), clf, plot(temp_x,temp_y,'-o'), grid on
% figure(2), clf, plot([-fliplr(temp_x) 0 temp_x],[-fliplr(temp_y) 0 temp_y],'-o'), grid on

Steering_Mod_Str_Rel_in = [-fliplr(temp_x) 0 temp_x];
Steering_Mod_Str_Rel_out = [-fliplr(temp_y) 0 temp_y];

clear temp_x temp_y

% Steering Relative Gain
Steering_Relative_Gain = 5;

% Boost Trigger
Boost_Trigger_High_Speed = 5.0; % 3.658; % m/s
Boost_Trigger_Low_Speed = 1.5; % m/s

Boost_Trigger_Increasing_Limit = (Boost_Trigger_High_Speed-Boost_Trigger_Low_Speed)/0.02*t_sample;
Boost_Trigger_Decreasing_Limit = -(Boost_Trigger_High_Speed-Boost_Trigger_Low_Speed)/0.25*t_sample;

% Joystick Twist Axis Gains
Steering_Twist_Gain = -0.5;
Translation_Twist_Gain = 0.5;
Twist_Deadzone_pos = 0.01;
Twist_Deadzone_neg = -Twist_Deadzone_pos;

% April tag translation control gains
AT_XY_Control_Gain = 1.5;  % meter/second per meter of x-y error


%% Wheel Gear Ratio
gear_ratio = 6.12;  % L1 gear ratio = 8.14,  L3 gear ratio = 6.12
wheel_diameter = 0.101600203;
Wheel_Speed_to_Motor_Speed = 60*gear_ratio/(wheel_diameter*pi); % (rev/min)/(m/sec)

Drive_Motor_Max_Speed = 6200; % rpm  (also used below for PID feedforward gain)
Drive_Wheel_Max_Speed = Drive_Motor_Max_Speed/Wheel_Speed_to_Motor_Speed; % m/sec

% Ran a test without the adjustment factor with the following results
%   physical measurement = 177.33 feet
%   odometry estimate    = 186.44 feet
adjustment_factor = 0.951;  % 177.33/186.44
% set the above factor to 1.0 for simulation (don't forget to change it back!)
% adjustment_factor = 1.0;

% used for odometry
Motor_Rev_to_Wheel_Distance = wheel_diameter*pi/gear_ratio*adjustment_factor; % m/rev

clear gear_ratio wheel_diameter adjustment_factor


%% Wheel Locations from Center of Rotation
% distances between swerve modules
FrontBack = (20.125 - 0.125 - 2*2.625)*0.0254;  % meters
LeftRight = (20.125 - 0.125 - 2*2.625)*0.0254;  % meters

% swerve module distances from center to x and y coordinates
% Front Left
Distance_FL_x = FrontBack/2;
Distance_FL_y = LeftRight/2;

% Front Right
Distance_FR_x = FrontBack/2;
Distance_FR_y = -LeftRight/2;

% Back Left
Distance_BL_x = -FrontBack/2;
Distance_BL_y = LeftRight/2;

% Back Right
Distance_BR_x = -FrontBack/2;
Distance_BR_y = -LeftRight/2;

clear FrontBack LeftRight


%% Drive Motor PID
Drive_Motor_Control_FF= 1/Drive_Motor_Max_Speed;  % 1 DC / Max Speed RPM;
Drive_Motor_Control_P = 0.000005;

Drive_Motor_Control_I = 0.0000002*0;

Drive_Motor_Control_I_UL = 0; % 0.1
Drive_Motor_Control_I_LL = -Drive_Motor_Control_I_UL;

Drive_Motor_Control_D = 0.000002/t_sample;

Derivative_low_pass_filter_freq = 2; % Hz
Drive_Motor_Control_D_FilterCoeff = 1-exp(-2*pi*Derivative_low_pass_filter_freq*t_sample);
Drive_Motor_Control_D_UL = 0.2;
Drive_Motor_Control_D_LL = -Drive_Motor_Control_D_UL;

Drive_Motor_Control_Sign_Change_Deadband = 7000;  %1500;

Drive_Motor_Control_Module_Angle_Error = [0 45]*pi/180;
Drive_Motor_Control_Scale_Factor = [1 1]; %[1 0.05];

clear Drive_Motor_Max_Speed Derivative_low_pass_filter_freq


%% Steering Motor PID
Steering_Motor_Control_P = 0.15;

Steering_Motor_Control_I = 0.005;
Steering_Motor_Control_I_UL = 0.005;
Steering_Motor_Control_I_LL = -Steering_Motor_Control_I_UL;

Steering_Motor_Control_D = 0.01/t_sample;
Derivative_low_pass_filter_freq = 2; % Hz
Steering_Motor_Control_D_FilterCoeff = 1-exp(-2*pi*Derivative_low_pass_filter_freq*t_sample);
Steering_Motor_Control_D_UL = 0.2;
Steering_Motor_Control_D_LL = -Drive_Motor_Control_D_UL;

clear Derivative_low_pass_filter_freq


%% Steering Heading PID
Steering_Heading_Control_P = 2.5;

Steering_Heading_Control_I = 0.015*0;  % set to 0 to stop gyro drift
Steering_Heading_Control_I_UL = 0.1;
Steering_Heading_Control_I_LL = -Steering_Heading_Control_I_UL;
Steering_Heading_Control_D = 0;
Derivative_low_pass_filter_freq = 2; % Hz
Steering_Heading_Control_D_FilterCoeff = 1-exp(-2*pi*Derivative_low_pass_filter_freq*t_sample);
Steering_Heading_Control_D_UL = 0;
Steering_Heading_Control_D_LL = -Steering_Heading_Control_D_UL;

Steering_Heading_Control_Total_UL = 2.5;  % m/sec
Steering_Heading_Control_Total_LL = -Steering_Heading_Control_Total_UL;

Steering_Heading_Control_Deadzone = 0.1;


clear Derivative_low_pass_filter_freq


%% Translation Speed Rate Limit
Translation_Speed_Rate_Limit_Inc =  4;
Translation_Speed_Rate_Limit_Dec = -4;
Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
Translation_Speed_NonZero_Error_Thresh = 0.15;
Translation_Speed_NonZero_Final_Scale_Factor = 0.05;


%% Steering Relative Cmd Rate Limit
Steering_Relative_Cmd_Rate_Limit_Inc = 10;
Steering_Relative_Cmd_Rate_Limit_Dec = -10;
Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;


%% Steering Absolute Cmd Rate Limit
Steering_Absolute_Cmd_Rate_Limit_Inc = 1;
Steering_Absolute_Cmd_Rate_Limit_Dec = -1;
Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
