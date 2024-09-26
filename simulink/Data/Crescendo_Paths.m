% [x, y, robot velocity, angle]

nominal_speed = 1.25;
D2R = pi/180;

% Blue Autos #1
x_offset = -6*25/1000*0*0;
y_offset = -8*25/1000*0*0;
Path1 = [...
    15.000 + x_offset, 2.660 + y_offset, 1.0 * nominal_speed, 0*D2R;
    13.848 + x_offset, 2.660 + y_offset, 1.0 * nominal_speed, 0*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path2 = [...
    13.848 + x_offset, 2.660 + y_offset, 1.0 * nominal_speed, 0*D2R;
    13.848 + 18*25/1000 + x_offset, 2.660 + y_offset, 1.0 * nominal_speed, 0*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path3 = [
    13.848 + 18*25/1000 + x_offset, 2.660 + y_offset, 1.0 * nominal_speed, 90*D2R;
    13.580 + x_offset, 2.200 + y_offset, 1.0 * nominal_speed, 90*D2R;
    13.580 + x_offset, 1.300 + y_offset, 1.0 * nominal_speed, 90*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path4 = [
    13.580 + x_offset, 1.300 + y_offset, 1.0 * nominal_speed, 90*D2R;
    14.500 + x_offset, 1.800 + y_offset, 1.0 * nominal_speed, 45*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    ];

% Red Autos #1
x_offset = 6*25/1000*0*0;
y_offset = 8*25/1000*0*0;

Path5 = [...
    16.541 - (15.000) + x_offset, 2.660 + y_offset, 1.0 * nominal_speed, 180*D2R;
    16.541 - (13.848) + x_offset, 2.660 + y_offset, 1.0 * nominal_speed, 180*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path6 = [...
    16.541 - (13.848) + x_offset, 2.660 + y_offset, 1.0 * nominal_speed, 180*D2R;
    16.541 - (13.848 + 18*25/1000) + x_offset, 2.660 + y_offset, 1.0 * nominal_speed, 180*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path7 = [
    16.541 - (13.848 + 18*25/1000) + x_offset, 2.660 + y_offset, 1.0 * nominal_speed, 90*D2R;
    16.541 - (13.580) + x_offset, 2.200 + y_offset, 1.0 * nominal_speed, 90*D2R;
    16.541 - (13.580) + x_offset, 1.300 + y_offset, 1.0 * nominal_speed, 90*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path8 = [
    16.541 - (13.580) + x_offset, 1.300 + y_offset, 1.0 * nominal_speed, 90*D2R;
    16.541 - (14.500) + x_offset, 1.800 + y_offset, 1.0 * nominal_speed, (-45+180)*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    ];

% Blue Autos #2
x_offset = -6*25/1000*0;
y_offset = -8*25/1000*0;
Path9 = [...
    15.750 + x_offset, 3.940 + y_offset, 1.0 * nominal_speed, -60*D2R;
    15.200 + x_offset, 4.100 + 9*25/1000 + y_offset, 1.0 * nominal_speed, 0*D2R;    
    13.900 + x_offset, 4.100 + 9*25/1000 + y_offset, 1.0 * nominal_speed, 0*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path10 = [...
    13.900 + x_offset, 4.100 + 9*25/1000 + y_offset, 1.0 * nominal_speed, 0*D2R;
    15.000 + x_offset, 4.300 + y_offset, 1.0 * nominal_speed, -45*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path11 = [
    15.000 + x_offset, 4.300 + y_offset, 3.0 * nominal_speed, -45*D2R;
    13.000 + x_offset, 6.000 + y_offset, 3.0 * nominal_speed, -45*D2R;
    11.000 + x_offset, 6.500 + y_offset, 2.0 * nominal_speed, 0*D2R;
    10.000 + x_offset, 6.028 + y_offset, 1.0 * nominal_speed, 11*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path12 = [
    10.000 + x_offset, 6.028 + y_offset, 3.0 * nominal_speed, 11*D2R;
    11.000 + x_offset, 6.500 + y_offset, 3.0 * nominal_speed, 0*D2R;
    13.000 + x_offset, 6.000 + y_offset, 2.0 * nominal_speed, -45*D2R;
    15.000 + x_offset, 4.300 + y_offset, 1.0 * nominal_speed, -45*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    ];

% Red Autos #2
x_offset = 6*25/1000*0;
y_offset = 8*25/1000*0;
Path13 = [...
    0.791 + x_offset, 3.940 + y_offset, 1.0 * nominal_speed, (60-180)*D2R;
    1.341 + x_offset, 4.100 + 9*25/1000 + y_offset, 1.0 * nominal_speed, (0-180)*D2R;    
    2.641 + x_offset, 4.100 + 9*25/1000 + y_offset, 1.0 * nominal_speed, (0-180)*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path14 = [...
    2.641 + x_offset, 4.100 + 9*25/1000 + y_offset, 1.0 * nominal_speed, (0-180)*D2R;
    1.541 + x_offset, 4.300 + y_offset, 1.0 * nominal_speed, (45-180)*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path15 = [
    1.541 + x_offset, 4.300 + y_offset, 3.0 * nominal_speed, (45-180)*D2R;
    3.541 + x_offset, 6.000 + y_offset, 3.0 * nominal_speed, (45-180)*D2R;
    5.541 + x_offset, 6.500 + y_offset, 2.0 * nominal_speed, (0-180)*D2R;
    8.041-1.5 + x_offset, 6.028 + y_offset, 1.0 * nominal_speed, (-11-180)*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
];

Path16 = [
    8.041-1.5 + x_offset, 6.028 + y_offset, 3.0 * nominal_speed, (-11-180)*D2R;
    5.541 + x_offset, 6.500 + y_offset, 3.0 * nominal_speed, (0-180)*D2R;
    3.541 + x_offset, 6.000 + y_offset, 2.0 * nominal_speed, (45-180)*D2R;
    1.541 + x_offset, 4.300 + y_offset, 1.0 * nominal_speed, (45-180)*D2R;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    0 0 0 0;
    ];

All_Paths = cat(3, ...
    Path1,...
    Path2,...
    Path3,...
    Path4,...
    Path5,...
    Path6,...
    Path7,...
    Path8,...
    Path9,...
    Path10,...
    Path11,...
    Path12,...
    Path13,...
    Path14,...
    Path15,...
    Path16...     
);

All_Num_Poses = [
  2,... %1
  2,... %2
  3,... %3
  2,... %4
  2,... %5
  2,... %6
  3,... %7
  2,... %8  
  3,... %9
  2,... %10
  4,... %11
  4,... %12  
  3,... %13
  2,... %14
  4,... %15
  4,... %16  
];

All_Paths = All_Paths - [16.54106/2 8.2/2 0 0];
All_Paths = All_Paths .* [-1 -1 1 1];
All_Paths = All_Paths + [16.54106/2 8.2/2 0 0];

clear x_offset y_offset nominal_speed D2R


%% plot paths
% figure(1),clf
% plot(AT_Tag_7_Coordinate_Y.Value,AT_Tag_7_Coordinate_X.Value,'s')
% axis equal
% grid on
% hold on
% for k = 1:4
%     auto_xy = All_Paths(:,:,k)
%     auto_x = auto_xy(1:All_Num_Poses(k),1)
%     auto_y = auto_xy(1:All_Num_Poses(k),2)
%     plot(auto_y,auto_x,'-o')
% end
% 
% figure(2),clf
% plot(AT_Tag_4_Coordinate_Y.Value,AT_Tag_4_Coordinate_X.Value,'s')
% axis equal
% grid on
% hold on
% for k = 5:8
%     auto_xy = All_Paths(:,:,k)
%     auto_x = auto_xy(1:All_Num_Poses(k),1)
%     auto_y = auto_xy(1:All_Num_Poses(k),2)
%     plot(auto_y,auto_x,'-o')
% end
% 
% figure(3),clf
% plot(AT_Tag_7_Coordinate_Y.Value,AT_Tag_7_Coordinate_X.Value,'s')
% axis equal
% grid on
% hold on
% for k = 9:12
%     auto_xy = All_Paths(:,:,k)
%     auto_x = auto_xy(1:All_Num_Poses(k),1)
%     auto_y = auto_xy(1:All_Num_Poses(k),2)
%     plot(auto_y,auto_x,'-o')
% end
% 
% figure(4),clf
% plot(AT_Tag_4_Coordinate_Y.Value,AT_Tag_4_Coordinate_X.Value,'s')
% axis equal
% grid on
% hold on
% for k = 13:16
%     auto_xy = All_Paths(:,:,k)
%     auto_x = auto_xy(1:All_Num_Poses(k),1)
%     auto_y = auto_xy(1:All_Num_Poses(k),2)
%     plot(auto_y,auto_x,'-o')
% end
