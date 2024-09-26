%% Spline Path Following
% Not tunable while running
Spline_Num_Samples = 50;
Spline_Num_Samples_3x = Spline_Num_Samples*3;
Spline_Samples_Per_Pass = 10; % must be an even number
Spline_Max_Num_RefPoses = 10;
Spline_Num_Poses_default = Spline_Max_Num_RefPoses;
Spline_Ref_Poses_default = zeros(Spline_Max_Num_RefPoses,4);
Spline_Tension = 0;
Spline_Velocity_Axis  = [0.50 1.50 2.50 3.50]; % m/s
Spline_Capture_Radius = [0.20 0.30 0.40 0.50]; % m
Spline_Lookahead_Dist = [0.20 0.20 0.20 0.40]; % m

% % Tunable while running
Spline_Stop_Radius = 0.1; % m
Spline_Max_Centripital_Acceleration = 10; % m/sec^2
Spline_Pose_Num_Before_End_Reduce_Speed = 1;  % index count
Spline_Last_Pose_Distance_to_Velocity_Gain = 2; % (m/sec) / (m)
Spline_Velocity_Multiplier_TEST = 1.0;  % velocity scaling for test purposes only

% % Spline_Ref_Poses_switch_num = 1;
% velocity_gain = Drive_Wheel_Max_Speed*2;
% Spline_Num_Poses_auto1 = 3;
% Spline_Ref_Poses_auto1 = [% x, y, velocity, field-oriented heading
%     15.22   6.56    velocity_gain   0*(180+60)*pi/180
%     5.14    6.34    velocity_gain   0
%     1.18    4.23    velocity_gain   0*(180+45)*pi/180
%     1.18    4.23    velocity_gain   0*(180+45)*pi/180
%     1.18    4.23    velocity_gain   0*(180+45)*pi/180
%     1.18    4.23    velocity_gain   0*(180+45)*pi/180    
%     ];
% 
% Spline_Num_Poses_auto2 = 6;
% Spline_Ref_Poses_auto2 = [% x, y, velocity, field-oriented heading
%     15.22   6.56    velocity_gain   0*(180+60)*pi/180
%     12.96   5.50    velocity_gain   0*(180+60)*pi/180
%     10.74   4.00    velocity_gain   0
%     6.27    4.20    velocity_gain   0    
%     3.35    2.76    velocity_gain   0*(180+60)*pi/180
%     1.92    2.54    velocity_gain   0    
%     ];
% 
% Spline_Num_Poses_auto3 = 4;
% Spline_Ref_Poses_auto3 = [% x, y, velocity, field-oriented heading
%     15.22   6.56    velocity_gain   0*(180+60)*pi/180
%     11.50   4.40    velocity_gain   0*(180+45)*pi/180
%     6.65    2.01    velocity_gain   0
%     1.00    1.20    velocity_gain   0*(180-45)*pi/180
%     1.00    1.20    velocity_gain   0*(180-45)*pi/180 
%     1.00    1.20    velocity_gain   0*(180-45)*pi/180     
%     ];
% 
% clear velocity_gain