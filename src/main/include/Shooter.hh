#pragma once

#include "rev/CANSparkMax.h"
#include "include/Constants.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include <TimeOfFlight.h>
#include "lib/include/Component.hh"
#include <frc/Servo.h>

class Shooter : public Component
{
public:
    Shooter();

    /**
     * Runs before the step function is called in the main loop
     */
    void PreStepCallback();

    /**
     * Runs after the step function is called in the main loop
     */
    void PostStepCallback();
    
    /**
     * Puts values to the SmartDashboard via the SD Callbacks function
     */
    void SmartDashboardCallback();
    
    /**
     * Callback that triggers when the game state of the robot changes
     */
    void GameStateChangeCallback();
    
    /*
     * X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X
     * X X X X                 Class Specific Methods                  X X X X
     * X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X
     */
    private:
    frc::TimeOfFlight TOF_Sensor{Constants::Shooter_Constants::TOF_ID};

    rev::CANSparkMax Left_Motor{Constants::Shooter_Constants::Left_Shooter_Motor_CANID, rev::CANSparkLowLevel::MotorType::kBrushless};
    rev::CANSparkMax Right_Motor{Constants::Shooter_Constants::Right_Shooter_Motor_CANID, rev::CANSparkLowLevel::MotorType::kBrushless};
    
    rev::SparkRelativeEncoder Left_Relative_Encoder{Left_Motor.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
    rev::SparkRelativeEncoder Right_Relative_Encoder{Right_Motor.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};

    frc::Servo Unicorn_Horn_Servo{Constants::Shooter_Constants::Unicorn_Horn_Servo_PWM_Channel};
};