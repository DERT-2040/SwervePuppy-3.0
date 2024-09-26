%% Odometry rotation matrix
% robot rotation matrix to obtain: 
%   Vx and Vy for each module from the robot center Vx, Vy, and Omega
%   Dx and Dy for each module from the robot center Dx, Dy, and Theta
Rotation_Local =  [1 0 -Distance_FL_y;
                   0 1  Distance_FL_x;
                   1 0 -Distance_FR_y;
                   0 1  Distance_FR_x;
                   1 0 -Distance_BL_y;
                   0 1  Distance_BL_x;
                   1 0 -Distance_BR_y;
                   0 1  Distance_BR_x];

% pseudo inverse of the rotation matrix
temp = pinv(Rotation_Local);

% only keep first two rows since we don't need to estimate Theta
Rotation_Local_Inv = temp(1:2,:);

% reset the odometry estimate to the IC
% write to this in Smart Dashboard to reset (rising edge)
Odometry_Reset_IC = 0;

% only used for validation testing
% set to 1 to tear the X and Y measurement
% set to 0 to let the X and Y measurements accumulate since the last tear
Odometry_X_Y_TEAR = 0;

clear temp

Odometry_IC_X = 0;
Odometry_IC_Y = 0;


%% Kalman Filter
KF_Enable = 1;
KF_Odom_Covariance = 0.001*eye(2);
KF_Vision_Covariance = 0.1*eye(2);
KF_Vision_Ambiguity_Thresh = 0.1;  % below this threshold trust the vision estimate