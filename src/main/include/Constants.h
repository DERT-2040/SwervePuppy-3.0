#pragma once
//std
#include <string>
class Constants {
public:
//HID Ports
    static constexpr int k_Gamepad_Port = 0;
    static constexpr int k_Left_Joystick_Port = 1;
    static constexpr int k_Right_Joystick_Port = 2;    
//Swerve Drive
    //Drive Motor CAN IDs
        static constexpr int k_FrontLeft_Drive_CANID = 6;
        static constexpr int k_FrontRight_Drive_CANID = 2;
        static constexpr int k_BackLeft_Drive_CANID = 8;
        static constexpr int k_BackRight_Drive_CANID = 4;
    //Steer Motor CAN IDs
        static constexpr int k_FrontLeft_Steer_CANID = 5;
        static constexpr int k_FrontRight_Steer_CANID = 1;
        static constexpr int k_BackLeft_Steer_CANID = 7;
        static constexpr int k_BackRight_Steer_CANID = 3;
    //Drive Motor Reversal
        static constexpr bool k_FrontLeft_Drive_Is_Reversed = false;
        static constexpr bool k_FrontRight_Drive_Is_Reversed = false;
        static constexpr bool k_BackLeft_Drive_Is_Reversed = false;
        static constexpr bool k_BackRight_Drive_Is_Reversed = false;
    //Steer Motor Reversal
        static constexpr bool k_FrontLeft_Steer_Is_Reversed = true;
        static constexpr bool k_FrontRight_Steer_Is_Reversed = true;
        static constexpr bool k_BackLeft_Steer_Is_Reversed = true;
        static constexpr bool k_BackRight_Steer_Is_Reversed = true;
    //Steer Encoder Ports
    //TODO: Use CTR Tuning software to set the CAN ids.
        static constexpr int k_FrontLeft_Steer_Encoder_ID = 25;
        static constexpr int k_FrontRight_Steer_Encoder_ID = 21;
        static constexpr int k_BackLeft_Steer_Encoder_ID = 27;
        static constexpr int k_BackRight_Steer_Encoder_ID = 23;
    //Drive Motor Properties
        static constexpr double k_Drive_Motor_Open_Loop_Ramp_Rate = 0.00000001;
        static constexpr double k_Drive_Motor_Smart_Current_Limit = 15;
        static constexpr double k_Drive_Motor_Secondary_Current_Limit = 15;
    //Steer Motor Properties
        static constexpr double k_Steer_Motor_Open_Loop_Ramp_Rate = 0.1;
        static constexpr double k_Steer_Motor_Smart_Current_Limit = 20;
        static constexpr double k_Steer_Motor_Secondary_Current_Limit = 20;
    //Wheel Offset Keys
        static constexpr std::string_view k_FrontLeft_Wheel_Offset_Key = "FrontLeftWheelOffset";
        static constexpr std::string_view k_FrontRight_Wheel_Offset_Key = "FrontRightWheelOffset";
        static constexpr std::string_view k_BackLeft_Wheel_Offset_Key = "BackLeftWheelOffset";
        static constexpr std::string_view k_BackRight_Wheel_Offset_Key = "BackRightWheelOffset";
//IMU
    static constexpr int k_Pigeon2_Device_ID = 28;
    static constexpr std::string_view k_Pigeon2_Device_Name = "uno";
//Default States  
    class CAN_Adjustment_Values
    {
    public:
        static constexpr int kStatus1_ms = 60; //ms
        static constexpr int kStatus2_ms = 60; //ms
    };
};