% Parameters to exclude from being tunable.
% This is used in the 'Build_Extern.m' file
Not_Tunable_List = {'t_sample',...
    'Distance_FL_x','DistancAe_FL_y','Distance_FR_x','Distance_FR_y',...
    'Distance_BL_x','Distance_BL_y','Distance_BR_x','Distance_BR_y',...
    'Wheel_Speed_to_Motor_Speed','Motor_Rev_to_Wheel_Distance','Drive_Wheel_Max_Speed',...
    'KF_Odom_Covariance','KF_Vision_Covariance',...
    'Spline_Num_Samples','Spline_Num_Samples_3x','Spline_Samples_Per_Pass',...
    'Spline_Max_Num_RefPoses','Spline_Tension',...
    'Spline_Velocity_Axis','Spline_Capture_Radius','Spline_Lookahead_Dist',...
    'Spline_Num_Poses_default','Spline_Num_Poses_auto1','Spline_Num_Poses_auto2','Spline_Num_Poses_auto3',...
    'Spline_Ref_Poses_default','Spline_Ref_Poses_auto1','Spline_Ref_Poses_auto2','Spline_Ref_Poses_auto3'...
    'l_1','l_2','l_3','l_4','l_5','l_6','l_7','l_8','l_9','l_10','l_11',...
    'Back_AA_spacing','Back_AA_length',...
    'Back_AA_Bot_Min_Ext','Back_AA_Bot_Max_Ext','Back_AA_Top_Min_Ext','Back_AA_Top_Max_Ext',...
    'Front_AA_spacing','Front_AA_length','Back_AA_Bot_Min_Ext','Back_AA_Bot_Max_Ext',...
};

% sample time model
t_sample = 0.020;

% gyro calibration
Gyro_Calibration_Reset_Degree = 0; % degrees
Gyro_Calibration_Reset_Flag = 0;  % when this value increases then reset to the degree value above


%% Thresholds for treating gamepad sticks as discrete inputs
Gamepad_Stick_Neg_Threshold = -0.5;
Gamepad_Stick_Pos_Threshold = 0.5;


%% TEST mode parameters
% Test Mode gains to convert gamepad inputs to duty cycle
Test_DC_Gain_BackUpper = 0.3;
Test_DC_Gain_Front = 0.3;
Test_DC_Gain_BackLower = 0.3;
Test_DC_Gain_BallScrew = 0.2;  % do not make this larger than 0.2 or you may damage the ball screw nut
Test_DC_Gain_Intake = -1;
Test_DC_Gain_Shooter = 1;

% Test Mode for swerve drive
% When this is set to 1 then the control will listen to joystick button
% inputs to toggle absolute or relative
TEST_Swerve_Mode_Override_Flag = 0;

% temporary variables for testing
TEST_Servo_Override_Flag = 0;
TEST_Servo_Override_Value = 0;

% These overrides take effect when values are changed to non-zero
TEST_Speaker_Angle = 0;   % degrees
TEST_Speaker_Height = 0;  % mm
TEST_Speaker_Gap = 0;     % mm
TEST_Speaker_Distance = 0; % m


%% Climber Control
Climber_DutyCycle_Pos = 0.5;
Climber_DutyCycle_Neg = -1;


%% Run data scripts
Swerve_Drive
Odometry_and_Kalman_Filter
Spline_Path_Following
Crescendo_Autos
Crescendo_Paths
Crescendo_Arms_Control
Crescendo_Intake_and_Shooter_Control
Crescendo_April_Tag_Control


