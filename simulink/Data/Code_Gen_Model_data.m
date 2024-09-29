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
};

% sample time model
t_sample = 0.020;

% gyro calibration
Gyro_Calibration_Reset_Degree = 0; % degrees
Gyro_Calibration_Reset_Flag = 0;  % when this value increases then reset to the degree value above

% Test Mode for swerve drive
% Setting override to 1 will use constants for translation and steering modes
TEST_Swerve_Mode_Override_Flag = 0;
TEST_Swerve_Mode_Translation = 0; 
TEST_Swerve_Mode_Steering = 0;

%% Run data scripts
Swerve_Drive
Odometry_and_Kalman_Filter
Spline_Path_Following
Crescendo_April_Tag_Control


