#pragma once

#include <include/Constants.h>
#include <TimeOfFlight.h>
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
#include "lib/include/Component.hh"
#include "frc/SmartDashboard/SmartDashboard.h"

class LineSensor : public Component
{
public:
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
    frc::TimeOfFlight Line_Sensor{Constants::Line_Sensor_Constants::Line_SensorID};
};