#pragma once
#include <TimeOfFlight.h>
#include <rev/CANSparkMax.h>
#include "lib/include/Component.hh"
#include "include/Constants.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

class Intake : public Component
{
public:
    Intake();

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
    frc::TimeOfFlight TOF_Sensor{Constants::Intake_Constants::TOF_ID};
    rev::CANSparkMax Intake_Motor{Constants::Intake_Constants::Intake_Motor_Device_ID, rev::CANSparkMax::MotorType::kBrushless};
};