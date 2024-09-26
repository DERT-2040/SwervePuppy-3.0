%% Intake and Shooter Parameters
% Time of Flight sensor distance for detecting in intake
Note_Detect_Dist_Intake = 200;  % mm

% Time of Flight sensor distance for detecting in shooter
Note_Detect_Dist_Shooter = 60;  % mm

% Time to run shooter before running intake
Note_Time_Transfer_Spin_Up = 0.5;  % seconds

% Shooter desired speed for storing note
Shooter_Motor_DesSpd_Store = 500; % rpm

% Time to continue running shooter after detecting the note
Note_Time_Transfer = 0;  % seconds

% Shooter duty cycle for ejecting note
Shooter_DC_Eject = 0.2; % duty cycle

% Time to run shooter for secoring in amp/trap
Note_Time_Eject = 1.0; % seconds

% Speaker shooting parameters
Shooter_Motor_Speed_Transition = 2000;
Note_Time_Speaker_Spin_Up = 0.5;

% Shooter Servo (note stopper)
Servo_Time_Store = 0.5; % seconds
Servo_Time_Deploy = 0.4; % seconds

% Maximum servo store position vs. calculated shooter angle
% Servo = Angle(deg) * Gain + Offset
Servo_Store_Offset = 0.65;  % setting this smaller will make it stick out more all the time
Servo_Store_Gain = 0.0071429;  % this is tuned to keep a constant angle as the shooter rotates

% Add more based on front arm height
Servo_Front_Arm_Length_in = [250 350];
Servo_Addition_out = [0 0.25];

% Test Mode to get note stopper inside the frame
TEST_Servo_Down_Flag = 0;  % Use in test mode before a match to put the servo down
TEST_Servo_Down_Value = 0.85;

% Shooter speed control PID for transfer
Shooter_Motor_Control_FF= 0.00025;  % 1 DC / Max Speed RPM;
Shooter_Motor_Control_P = 0.00010;
Shooter_Motor_Control_I = 0.00002;
Shooter_Motor_Control_I_UL = 0.1;
Shooter_Motor_Control_I_LL = -0.1;
