#pragma once

#include <rev/CANSparkMax.h>
#include "include/Constants.h"
#include "lib/include/Component.hh"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

class Climber : public Component
{
public:
    Climber();
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
    rev::CANSparkMax m_Climber_Motor{Constants::Climber_Constants::Climber_Motor_Device_ID, rev::CANSparkMax::MotorType::kBrushless};
    rev::SparkRelativeEncoder m_Climber_Encoder{m_Climber_Motor.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
};