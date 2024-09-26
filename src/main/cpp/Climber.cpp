#include "include/Climber.hh"

void Climber::PreStepCallback()
{

}

void Climber::PostStepCallback()
{
    m_Climber_Motor.Set(Code_Gen_Model_Y.Climber_DutyCycle);
}

Climber::Climber()
{   //Restore factoroy defaults
    m_Climber_Motor.RestoreFactoryDefaults();

    //Set motor direction
    m_Climber_Motor.SetInverted(Constants::Climber_Constants::k_Climber_Is_Reversed);

    //Set idle mode to brake
    m_Climber_Motor.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
}

void Climber::SmartDashboardCallback()
{

}

void Climber::GameStateChangeCallback()
{
    
}