#pragma once
//std
#include <string>
//local
#include "lib/include/NeoSpark.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

namespace Constants
{
    namespace SwerveInfo
    {
    //Steer Encoder Ports
    //TODO: Use CTR Tuning software to set the CAN ids.
        static constexpr int k_FrontLeft_Steer_Encoder_ID = 25;
        static constexpr int k_FrontRight_Steer_Encoder_ID = 21;
        static constexpr int k_BackLeft_Steer_Encoder_ID = 27;
        static constexpr int k_BackRight_Steer_Encoder_ID = 23;
    
    //Wheel Offset Keys
        static constexpr std::string_view k_FrontLeft_Wheel_Offset_Key = "FrontLeftWheelOffset";
        static constexpr std::string_view k_FrontRight_Wheel_Offset_Key = "FrontRightWheelOffset";
        static constexpr std::string_view k_BackLeft_Wheel_Offset_Key = "BackLeftWheelOffset";
        static constexpr std::string_view k_BackRight_Wheel_Offset_Key = "BackRightWheelOffset";
    };

    namespace SwerveMotorsCreateInfo
    {
        //CAN Networking
            static constexpr int kStatus1_ms = 60; //ms
            static constexpr int kStatus2_ms = 60; //ms
        namespace Drive
        {
            static constexpr NeoSparkCreateInfo defaultDriveCreateInfo
            {
                -1,                                    // canID
                true,                                  // isReversed
                15,                                    // smartCurrentLimit
                15,                                    // secondaryCurrentLimit
                0.00000001,                            // openLoopRampRate
                kStatus1_ms,                           // status1PeriodicFramePeriod
                kStatus2_ms,                           // status2PeriodicFramePeriod
                true                                   // includeSensor
            };
            static NeoSparkCreateInfo frontLeft  = NeoSparkCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                 6, //CAN ID
                                                                                 &Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle,
                                                                                 &Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed,
                                                                                 &Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev);
            static NeoSparkCreateInfo frontRight = NeoSparkCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                  2, //CAN ID
                                                                                  &Code_Gen_Model_Y.FrontRight_Drive_DutyCycle,
                                                                                  &Code_Gen_Model_U.FrontRight_Drive_Motor_Speed,
                                                                                  &Code_Gen_Model_U.FrontRight_Drive_Motor_Rev);
            static NeoSparkCreateInfo backLeft   = NeoSparkCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                  8, //CAN ID
                                                                                  &Code_Gen_Model_Y.BackLeft_Drive_DutyCycle,
                                                                                  &Code_Gen_Model_U.BackLeft_Drive_Motor_Speed,
                                                                                  &Code_Gen_Model_U.BackLeft_Drive_Motor_Rev);
            static NeoSparkCreateInfo backRight  = NeoSparkCreateInfo::modifyInfo(defaultDriveCreateInfo,
                                                                                  4, //CAN ID
                                                                                  &Code_Gen_Model_Y.BackRight_Drive_DutyCycle,
                                                                                  &Code_Gen_Model_U.BackRight_Drive_Motor_Speed,
                                                                                  &Code_Gen_Model_U.BackRight_Drive_Motor_Rev);
        };
        
        namespace Steer
        {
            static constexpr NeoSparkCreateInfo defaultSteerCreateInfo
            {
                -1,                                    // canID
                false,                                 // isReversed
                20,                                    // smartCurrentLimit
                20,                                    // secondaryCurrentLimit
                0.1,                                   // openLoopRampRate
                kStatus1_ms,                           // status1PeriodicFramePeriod
                kStatus2_ms,                           // status2PeriodicFramePeriod
                false                                   // includeSensor
            };
            static NeoSparkCreateInfo frontLeft  = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                  5, //CAN ID
                                                                                  &Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle);
            static NeoSparkCreateInfo frontRight = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                  1, //CAN ID
                                                                                  &Code_Gen_Model_Y.FrontRight_Steer_DutyCycle);
            static NeoSparkCreateInfo backLeft   = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                  7, //CAN ID
                                                                                  &Code_Gen_Model_Y.BackLeft_Steer_DutyCycle);
            static NeoSparkCreateInfo backRight  = NeoSparkCreateInfo::modifyInfo(defaultSteerCreateInfo,
                                                                                  3, //CAN ID
                                                                                  &Code_Gen_Model_Y.BackRight_Steer_DutyCycle);
        };
    };
    
    namespace HID
    {
        static constexpr int k_Gamepad_Port = 0;
        static constexpr int k_Left_Joystick_Port = 1;
        static constexpr int k_Right_Joystick_Port = 2;
    };

    namespace IMU
    {
        static constexpr int k_Pigeon2_Device_ID = 28;
        static constexpr std::string_view k_Pigeon2_Device_Name = "uno";
    };
};