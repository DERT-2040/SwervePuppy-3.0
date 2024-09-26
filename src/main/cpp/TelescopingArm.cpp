#include "include/TelescopingArm.hh"


void TelescopingArm::PreStepCallback()
{
    Code_Gen_Model_U.Encoder_Revs_Back_Lower = Encoder_Back_Lower.GetPosition();
    Code_Gen_Model_U.Encoder_Revs_Back_Upper = Encoder_Back_Upper.GetPosition();
    Code_Gen_Model_U.Encoder_Revs_Front = Encoder_Front.GetPosition();

}

void TelescopingArm::PostStepCallback()
{
    Motor_Back_Lower.Set(Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle);
    Motor_Back_Upper.Set(Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle);
    Motor_Front.Set(Code_Gen_Model_Y.Front_Arm_DutyCycle);    
}

void TelescopingArm::SmartDashboardCallback()
{

}

void TelescopingArm::GameStateChangeCallback()
{
    
}

TelescopingArm::TelescopingArm()
{   //Restore factoroy defaults
    Motor_Back_Lower.RestoreFactoryDefaults();
    Motor_Back_Upper.RestoreFactoryDefaults();
    Motor_Front.RestoreFactoryDefaults();

    //Set motor direction
    Motor_Back_Lower.SetInverted(Constants::TelescopingArm_Constants::k_Back_Lower_Is_Reversed);
    Motor_Back_Upper.SetInverted(Constants::TelescopingArm_Constants::k_Back_Upper_Is_Reversed);
    Motor_Front.SetInverted(Constants::TelescopingArm_Constants::k_Front_Is_Reversed);      

    //Set idle mode to brake
    Motor_Back_Lower.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
    Motor_Back_Upper.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
    Motor_Front.SetIdleMode(rev::CANSparkBase::IdleMode::kBrake);
    
    //Set smart current limit
    Motor_Back_Lower.SetSmartCurrentLimit(Constants::TelescopingArm_Constants::k_TelescopingArm_Smart_Current_Limit);
    Motor_Back_Upper.SetSmartCurrentLimit(Constants::TelescopingArm_Constants::k_TelescopingArm_Smart_Current_Limit);
    Motor_Front.SetSmartCurrentLimit(Constants::TelescopingArm_Constants::k_TelescopingArm_Smart_Current_Limit);  
    
    //Set secondary current limit (not sure what this does)
    Motor_Back_Lower.SetSecondaryCurrentLimit(Constants::TelescopingArm_Constants::k_TelescopingArm_Secondary_Current_Limit);
    Motor_Back_Upper.SetSecondaryCurrentLimit(Constants::TelescopingArm_Constants::k_TelescopingArm_Secondary_Current_Limit);
    Motor_Front.SetSecondaryCurrentLimit(Constants::TelescopingArm_Constants::k_TelescopingArm_Secondary_Current_Limit);        
    
    //kStatus1
    Motor_Back_Lower.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    Motor_Back_Upper.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    Motor_Front.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    //kStatus2
    Motor_Back_Lower.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
    Motor_Back_Upper.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
    Motor_Front.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
}