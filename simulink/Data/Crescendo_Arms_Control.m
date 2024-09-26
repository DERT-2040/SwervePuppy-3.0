%% Arms Dimension Data
% vertical offset of back Argos Arm
l_1 = 1.0*25.4;

% vertical offset of Ball Screw
l_2 = 3.5*25.4;

% horizontal length from back argos arm to Ball Screw
l_3 = (12.5-5.5)*25.4;

% horizontal length from ball screw to front Argos Arm
l_4 = 5.5*25.4;

% length from pivot of front argos arm to pivot of ball screw on that arm
l_5 = 11.375*25.4;

% horizontal offset from the end of gap to Back Argos Arm pivot on shooter
l_6 = 0.042875*1000;

% vertical offset from the end of gap to Back Argos Arm pivot on shooter
l_7 = -0.076*1000;

% horizontal offset from back argos arm to Front Argos Arm pivot on shooter
l_8 = 0.155550*1000;

% vertical offset from back argos arm to Front Argos Arm pivot on shooter
l_9 = -1.0*25.4;

% horizontal offset for top roller of intake
l_10 = -0.050027*1000;

% vertical offset for top roller of intake
l_11 = 0.465697*1000;

% Back arm spacing between arms
Back_AA_spacing = 1.0*25.4;

% Back arm length
Back_AA_length = 17.0*25.4-10;  % subtracted 10 mm for fudge factor

% Back arm min and max
Back_AA_Bot_Min_Ext = 3.125*25.4;
Back_AA_Bot_Max_Ext = 317; % 12.625*25.4;
Back_AA_Top_Min_Ext = 0.75*25.4;
Back_AA_Top_Max_Ext = 334; % 12.75*25.4;

% Front arm spacing between arm and pivot
Front_AA_spacing = 1.0*25.4;

% Front arm length
Front_AA_length = (20-1/16)*25.4;

% Front arm min and max
Front_AA_Min_Ext = 0.25*25.4; % mm
Front_AA_Max_Ext = 443; % (18-1/16)*25.4;

% Ball screw max
Ball_Screw_Max = 11.0*25.4;


%% Arm Length Calculation
% Encoder distance per revolution (mm / motor rev)
Dist_Per_Rev_Back_Lower = ((1.75 * pi) / (9*7)) * 25.4; % 9:1 gear box, 7:1 gear box, 1.75 inch diameter sprocket, 25.4 mm per inch
Dist_Per_Rev_Back_Upper = ((1.75 * pi) / (9*7)) * 25.4; % 9:1 gear box, 7:1 gear box, 1.75 inch diameter sprocket, 25.4 mm per inch
Dist_Per_Rev_Front      = ((1.75 * pi) / (9*7)) * 25.4; % 9:1 gear box, 7:1 gear box, 1.75 inch diameter sprocket, 25.4 mm per inch
Dist_Per_Rev_Ball_Screw = (1/72)*25.4;

% Distance reset values (mm)
Dist_Reset_Value_Back_Lower = Back_AA_Bot_Min_Ext;
Dist_Reset_Value_Back_Upper = Back_AA_Top_Min_Ext;
Dist_Reset_Value_Front = Front_AA_Min_Ext;
Dist_Reset_Value_Ball_Screw = Ball_Screw_Max;
clear Ball_Screw_Max

% Calibration tolerance for operator indication (test point)
Dist_AA_Cal_Tol = 5; % mm, Argos Arms
Dist_BS_Cal_Tol = 1; % mm, Ball SCrew


%% Arm Position Tuning
% Position the arms for driving under the stage
Stage_Angle = 16;       % degrees
Stage_Height = 21*25.4; % mm
Stage_Gap = 9.5*25.4;     % mm

% Position arms for transfering a note into the shooter for scoring in the amp or trap
LoadShooter_Angle = 35;
LoadShooter_Height = 600;
LoadShooter_Gap = 280;

% Position the arms for scoring in the amp
Amp_Angle = -50;
Amp_Height = 1050;
Amp_Gap = 700;

% Position the arms for scoring in the trap
Trap_Angle = 30;
Trap_Height = 845;
Trap_Gap = 460;

% Tolerance checks for transitioning to the next state in Stateflow
Tol_Angle = 5;
Tol_Height = 0.5*25.4;
Tol_Gap = 0.5*25.4;

% Set the speaker parameters based on distance from the April Tag
Speaker_Distance_in =   [1.37   1.7	    2.0     2.3	    2.7	    3.0	    3.3	    3.6	    4.0	];

% Thursday 3/21
% Speaker_Angle_out =     [60	    50 	    40	    35	    32	    30      27.5	26.5  	26.5];
% Speaker_Height_out =    [590    590	    590	    590     590	    590	    590	    590	    590	];

% Friday, 3/22
% Speaker_Angle_out =     [60	    49 	    39	    33	    27	    25.5    24.5	23.5  	22.5];
% Speaker_Height_out =    [560    580	    590	    590     590	    590	    590	    590	    590	];

% Lower heights from 3/22
Speaker_Angle_out =     [60	    50 	    40	    35	    32	    30      27.5	26.5  	26.5];
Speaker_Height_out =    [560    580	    590	    590     590	    590	    590	    590	    590	];

Speaker_Gap_out =       [293	293	    293	    293     293	    293	    293	    293	    293	];

% % Argos Arms Desired Position Rate Limits
RL_Back_Stage_to_Speaker_Partial = 6;
RL_Back_Speaker_Partial_to_Speaker_Final = 3;
RL_Back_Speaker_Final_to_Speaker_Partial = 5;
RL_Back_Speaker_Partial_to_Stage = 10;
RL_FB_Ratio_Speaker_Partial = 1.33;
RL_FB_Ratio_Speaker_Final = 1.80;

RL_Back_Stage_to_Load = 7;
RL_Back_Load_to_Stage = 4;
RL_FB_Ratio_Stage_Load = 1.61;

RL_Back_Stage_to_Amp = 6;
RL_Back_Amp_to_Stage = 10;
RL_FB_Ratio_Stage_Amp = 1.0; %0.72;  at 0.72 it was getting into a 4-bar lock when rising

RL_Back_Load_to_Amp = 10;
RL_FB_Ratio_Load_Amp = 0.42;

RL_Back_Stage_to_Trap = 1;
RL_Back_Trap_to_Stage = 1;
RL_FB_Ratio_Stage_Trap = 1.15;

% % Ball Screw Desired Position Rate Limits
BS_Position_Inc_RL = 30; % mm/loop
BS_Position_Dec_RL = -30; % mm/loop


%% Arm Control Gains
% Argos Arms P+I Control
AA_Prop_Gain = 0.01;
AA_Integral_Gain = 0.0005;
AA_Integral_IC = 0;
AA_Integral_UL = 0.5;
AA_Integral_LL = -0.5;
AA_TC_UL = 0.6;
AA_TC_LL = -0.6;

% Ball Screw P+D Control
BS_Prop_Gain = 0.1;
BS_Deriv_Gain = 0;
BS_Deriv_FC = 0.2;
BS_Deriv_UL = 0.5;
BS_Deriv_LL = -0.5;
BS_TC_UL = 0.3;
BS_TC_LL = -0.3;
