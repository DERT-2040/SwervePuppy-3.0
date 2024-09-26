#pragma once

#include <rev/CANSparkMax.h>
#include <rev/SparkRelativeEncoder.h>
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include "lib/include/Component.hh"
#include "Include/Constants.h"

class TelescopingArm : public Component
{

public:
    TelescopingArm();
private:
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
    // Motors
    rev::CANSparkMax Motor_Back_Lower{Constants::TelescopingArm_Constants::k_Back_Lower_CANID, rev::CANSparkMax::MotorType::kBrushless}; 
    rev::CANSparkMax Motor_Back_Upper{Constants::TelescopingArm_Constants::k_Back_Upper_CANID, rev::CANSparkMax::MotorType::kBrushless}; 
    rev::CANSparkMax Motor_Front{Constants::TelescopingArm_Constants::k_Front_CANID, rev::CANSparkMax::MotorType::kBrushless}; 
    // Encoders
    rev::SparkRelativeEncoder Encoder_Back_Lower{Motor_Back_Lower.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
    rev::SparkRelativeEncoder Encoder_Back_Upper{Motor_Back_Upper.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
    rev::SparkRelativeEncoder Encoder_Front{Motor_Front.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};

};