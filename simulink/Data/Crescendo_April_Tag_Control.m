%% PhotonVision

% April Tag locations, dimensions in inches
% https://firstfrc.blob.core.windows.net/frc2024/FieldAssets/2024LayoutMarkingDiagram.pdf
%
% ID    X      Y       Z       Rotation
% 1     593.68 9.68    53.38   120°
% 2     637.21 34.79   53.38   120°
% 3     652.73 196.17  57.13   180°
% 4     652.73 218.42  57.13   180°   SPEAKER CENTER
% 5     578.77 323.00  53.38   270°   AMP
% 6     72.5   323.00  53.38   270°   AMP
% 7    -1.50   218.42  57.13   0°     SPEAKER CENTER
% 8    -1.50   196.17  57.13   0°
% 9     14.02  34.79   53.38   60°
% 10    57.54  9.68    53.38   60°
% 11    468.69 146.19  52.00   300°   TRAP
% 12    468.69 177.10  52.00   60°    TRAP
% 13    441.74 161.62  52.00   180°   TRAP
% 14    209.48 161.62  52.00   0°     TRAP
% 15    182.73 177.10  52.00   120°   TRAP
% 16    182.73 146.19  52.00   240°   TRAP

AT_Data = [...
    593.68 9.68    53.38   120;
    637.21 34.79   53.38   120;
    652.73 196.17  57.13   180;
    652.73 218.42  57.13   180;
    578.77 323.00  53.38   270;
    72.5   323.00  53.38   270;
    -1.50   218.42  57.13   0;
    -1.50   196.17  57.13   0;
    14.02  34.79   53.38   60;
    57.54  9.68    53.38   60;
    468.69 146.19  52.00   300;
    468.69 177.10  52.00   60;
    441.74 161.62  52.00   180;
    209.48 161.62  52.00   0;
    182.73 177.10  52.00   120;
    182.73 146.19  52.00   240;
    ];

% Find the target robot coordinates for each tag of interest when pushing the button.
% Calculate the tag location plus an desired offset distance in front of the tag.
% The offset distance is rotated using the rotation matrix.
% [X_target; Y_target] = [X_tag; Y_tag] + R*[d_offset; 0];
%   where R = rotation matrix = [cos(angle), -sin(angle); sin(angle), cos(angle)]

% Amp tags
d_offset = 36; % inches

tag = 5;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_5_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_5_Y = temp(2)*0.0254; % convert from inches to meters
AT_Target_Tag_5_Field_Angle = angle - pi;  % subtract pi radians for Red Alliance

tag = 6;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_6_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_6_Y = temp(2)*0.0254; % convert from inches to meters
AT_Target_Tag_6_Field_Angle = angle;

% Trap tags
d_offset = 48; % inches

tag = 11;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_11_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_11_Y = temp(2)*0.0254; % convert from inches to meters
AT_Target_Tag_11_Field_Angle = angle - pi;  % subtract pi radians for Red Alliance

tag = 12;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_12_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_12_Y = temp(2)*0.0254; % convert from inches to meters
AT_Target_Tag_12_Field_Angle = angle - pi;  % subtract pi radians for Red Alliance

tag = 13;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_13_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_13_Y = temp(2)*0.0254; % convert from inches to meters
AT_Target_Tag_13_Field_Angle = angle - pi;  % subtract pi radians for Red Alliance

tag = 14;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_14_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_14_Y = temp(2)*0.0254; % convert from inches to meters
AT_Target_Tag_14_Field_Angle = angle;

tag = 15;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_15_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_15_Y = temp(2)*0.0254; % convert from inches to meters
AT_Target_Tag_15_Field_Angle = angle;

tag = 16;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Target_Tag_16_X = temp(1)*0.0254; % convert from inches to meters
AT_Target_Tag_16_Y = temp(2)*0.0254; % convert from inches to meters
AT_Target_Tag_16_Field_Angle = angle;

clear d_offset tag angle temp

% Speaker X and Y Coordinates
% AT_Tag_4_Coordinate_X = AT_Data(4,1)*0.0254; % convert from inches to meters
% AT_Tag_4_Coordinate_Y = AT_Data(4,2)*0.0254; % convert from inches to meters
% AT_Tag_7_Coordinate_X = AT_Data(7,1)*0.0254; % convert from inches to meters
% AT_Tag_7_Coordinate_Y = AT_Data(7,2)*0.0254; % convert from inches to meters

clear AT_Data
