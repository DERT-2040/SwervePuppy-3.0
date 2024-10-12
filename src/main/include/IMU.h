#pragma once

//local
#include "lib/include/Component.h"
#include "include/Constants.h"
//crte
#include <ctre/phoenix6/Pigeon2.hpp>
//Simulink
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

namespace kIMU = Constants::IMU;

class IMU : public Component
{
public:
    IMU();
    /**
     * Resets yaw zero
     * 
     */
    void Reset();
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
    /**
     * Pigeon 2 IMU from CRTE
    */
    ctre::phoenix6::hardware::Pigeon2 m_Pigeon2{kIMU::k_Pigeon2_Device_ID, static_cast<std::string>(kIMU::k_Pigeon2_Device_Name)};
};