#pragma once
#include "include/Constants.h"
#include "lib/include/Component.hh"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include <rev/CANSparkMax.h>
#include <rev/SparkRelativeEncoder.h>
#include <frc/Preferences.h>

class BallScrew : public Component
{
public:
    BallScrew();
    void SetBallScrewPosition();
    void ResetBallScrew();
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
     rev::CANSparkMax m_BallScrew_Motor{Constants::BallScrew_Constants::k_BallScrew_Drive_CANID, rev::CANSparkMax::MotorType::kBrushless}; 
     rev::SparkRelativeEncoder m_BallScrew_Encoder{m_BallScrew_Motor.GetEncoder(rev::SparkRelativeEncoder::Type::kHallSensor, 42)};
};