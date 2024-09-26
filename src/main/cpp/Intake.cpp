#include "include/Intake.hh"

void Intake::PreStepCallback()
{
    Code_Gen_Model_U.Intake_TOF_Dist = TOF_Sensor.GetRange();
}

void Intake::PostStepCallback()
{
    Intake_Motor.Set(Code_Gen_Model_Y.Intake_Motor_DutyCycle);
}

void Intake::SmartDashboardCallback()
{

}

void Intake::GameStateChangeCallback()
{

}

Intake::Intake()
{
    Intake_Motor.RestoreFactoryDefaults();
    Intake_Motor.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
    
    //kStatus1
    Intake_Motor.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    //kStatus2
    Intake_Motor.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);

}