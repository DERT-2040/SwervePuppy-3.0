#pragma once

//local
#include "include/Constants.h"
#include "lib/include/Component.hh"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
//frc
#include <frc/DutyCycleEncoder.h>
#include <frc/Preferences.h>
#include <frc/smartdashboard/SmartDashboard.h> 
//rev
#include <rev/CANSparkMax.h>
#include <rev/SparkRelativeEncoder.h>
//ctr
#include <ctre/phoenix6/CANcoder.hpp>
//etc
#include <frc/smartdashboard/SmartDashboard.h>
//wpi
#include "wpi/raw_ostream.h"

class SwerveDrive : public Component
{
public:
  SwerveDrive();
    
    /**
     * Runs before the step function is called in the main loop
     */
    void PreStepCallback();

    /**
     * Runs after the step function is called in the main loop
     */
    void PostStepCallback();
    
    /**
     * See PreStep documentation in Robot.h
     */
    void PreStep();

    /**
     * See PostStep documentation in Robot.h
     */
    void ChangeGameStatesCallback();
    /*
     * X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X
     * X X X X                 Class Specific Methods                  X X X X
     * X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X
     */

    /**
     * Sets all motors in swerve drive to Brake mode
     * @warning do not use frequently, takes a lot of time and can overrun loop
    */
    void BrakeMode();

    /**
     * Sets all motors in swerve drive to coast mode
     * @warning do not use frequently, takes a lot of time and can overrun loop
    */
    void CoastMode();

    /**
     * Toggles the robot's driving controls from relative to field oriented and vise versa
     */
    void Toggle_Absolute_Translation();

    /**
     * Toggles the robot's steering controls from relative to field oriented and vise versa
     */
    void Toggle_Absolute_Steering();

    /**
     * Creates the wheel offset preferences if they have not been created
     */
    void Initalize_Wheel_Offset();

    /**
     * Sets the wheel offset preferences to whatever the sensors read are when the function is called
     */
    void Reset_Wheel_Offset();

    /**
     * Sets the simulink variables for wheel offsets to what is in the robot preferences
     */
    void Set_Wheel_Offset();

    /**
     * Enables commands to be able to go to the wheel motors
     */
    void WheelsOn();

    /**
     * Disables commands from being able to go to the wheel motors
     */
    void WheelsOff();

    /**
     * Puts values to the SmartDashboard via the SD Callbacks function
    */
    void SmartDashboardCallback();
    
private:
  //Drive Motors
    rev::CANSparkMax m_FrontLeft_Drive{Constants::k_FrontLeft_Drive_CANID, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax m_FrontRight_Drive{Constants::k_FrontRight_Drive_CANID, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax m_BackLeft_Drive{Constants::k_BackLeft_Drive_CANID, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax m_BackRight_Drive{Constants::k_BackRight_Drive_CANID, rev::CANSparkMax::MotorType::kBrushless};
  //Steer Motors
    rev::CANSparkMax m_FrontLeft_Steer{Constants::k_FrontLeft_Steer_CANID, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax m_FrontRight_Steer{Constants::k_FrontRight_Steer_CANID, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax m_BackLeft_Steer{Constants::k_BackLeft_Steer_CANID, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax m_BackRight_Steer{Constants::k_BackRight_Steer_CANID, rev::CANSparkMax::MotorType::kBrushless};
  //Drive Encoders
    rev::SparkRelativeEncoder m_FrontLeft_Drive_Encoder{m_FrontLeft_Drive.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
    rev::SparkRelativeEncoder m_FrontRight_Drive_Encoder{m_FrontRight_Drive.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
    rev::SparkRelativeEncoder m_BackLeft_Drive_Encoder{m_BackLeft_Drive.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
    rev::SparkRelativeEncoder m_BackRight_Drive_Encoder{m_BackRight_Drive.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
  //Steer Absolute Encoders
    ctre::phoenix6::hardware::CANcoder m_FrontLeft_Steer_Encoder{Constants::k_FrontLeft_Steer_Encoder_ID, "uno"};
    ctre::phoenix6::hardware::CANcoder m_FrontRight_Steer_Encoder{Constants::k_FrontRight_Steer_Encoder_ID, "uno"};
    ctre::phoenix6::hardware::CANcoder m_BackLeft_Steer_Encoder{Constants::k_BackLeft_Steer_Encoder_ID, "uno"};
    ctre::phoenix6::hardware::CANcoder m_BackRight_Steer_Encoder{Constants::k_BackRight_Steer_Encoder_ID, "uno"};
};