//local
#include "include/SwerveDrive.hh"
SwerveDrive::SwerveDrive()
{
  //Drive Motors
    //Front Left
      m_FrontLeft_Drive.RestoreFactoryDefaults();
      m_FrontLeft_Drive.SetInverted(Constants::k_FrontLeft_Drive_Is_Reversed);
      m_FrontLeft_Drive.SetSmartCurrentLimit(Constants::k_Drive_Motor_Smart_Current_Limit);
      m_FrontLeft_Drive.SetSecondaryCurrentLimit(Constants::k_Drive_Motor_Secondary_Current_Limit);
      m_FrontLeft_Drive.SetOpenLoopRampRate(Constants::k_Drive_Motor_Open_Loop_Ramp_Rate);
    //Front Right
      m_FrontRight_Drive.RestoreFactoryDefaults();
      m_FrontRight_Drive.SetInverted(Constants::k_FrontRight_Drive_Is_Reversed);
      m_FrontRight_Drive.SetSmartCurrentLimit(Constants::k_Drive_Motor_Smart_Current_Limit);
      m_FrontRight_Drive.SetSecondaryCurrentLimit(Constants::k_Drive_Motor_Secondary_Current_Limit);
      m_FrontRight_Drive.SetOpenLoopRampRate(Constants::k_Drive_Motor_Open_Loop_Ramp_Rate);
    //Back Left
      m_BackLeft_Drive.RestoreFactoryDefaults();
      m_BackLeft_Drive.SetInverted(Constants::k_BackLeft_Drive_Is_Reversed);
      m_BackLeft_Drive.SetSmartCurrentLimit(Constants::k_Drive_Motor_Smart_Current_Limit);
      m_BackLeft_Drive.SetSecondaryCurrentLimit(Constants::k_Drive_Motor_Secondary_Current_Limit);
      m_BackLeft_Drive.SetOpenLoopRampRate(Constants::k_Drive_Motor_Open_Loop_Ramp_Rate);
    //Back Right
      m_BackRight_Drive.RestoreFactoryDefaults();
      m_BackRight_Drive.SetInverted(Constants::k_BackRight_Drive_Is_Reversed);
      m_BackRight_Drive.SetSmartCurrentLimit(Constants::k_Drive_Motor_Smart_Current_Limit);
      m_BackRight_Drive.SetSecondaryCurrentLimit(Constants::k_Drive_Motor_Secondary_Current_Limit);
      m_BackRight_Drive.SetOpenLoopRampRate(Constants::k_Drive_Motor_Open_Loop_Ramp_Rate);
  //Steer Motors
    //Front Left
      m_FrontLeft_Steer.RestoreFactoryDefaults();
      m_FrontLeft_Steer.SetInverted(Constants::k_FrontLeft_Steer_Is_Reversed);
      m_FrontLeft_Steer.SetSmartCurrentLimit(Constants::k_Steer_Motor_Smart_Current_Limit);
      m_FrontLeft_Steer.SetSecondaryCurrentLimit(Constants::k_Steer_Motor_Secondary_Current_Limit);
      m_FrontLeft_Steer.SetOpenLoopRampRate(Constants::k_Steer_Motor_Open_Loop_Ramp_Rate);
    //Front Right
      m_FrontRight_Steer.RestoreFactoryDefaults();
      m_FrontRight_Steer.SetInverted(Constants::k_FrontRight_Steer_Is_Reversed);
      m_FrontRight_Steer.SetSmartCurrentLimit(Constants::k_Steer_Motor_Smart_Current_Limit);
      m_FrontRight_Steer.SetSecondaryCurrentLimit(Constants::k_Steer_Motor_Secondary_Current_Limit);
      m_FrontRight_Steer.SetOpenLoopRampRate(Constants::k_Steer_Motor_Open_Loop_Ramp_Rate);
    //Back Left
      m_BackLeft_Steer.RestoreFactoryDefaults();
      m_BackLeft_Steer.SetInverted(Constants::k_BackLeft_Steer_Is_Reversed);
      m_BackLeft_Steer.SetSmartCurrentLimit(Constants::k_Steer_Motor_Smart_Current_Limit);
      m_BackLeft_Steer.SetSecondaryCurrentLimit(Constants::k_Steer_Motor_Secondary_Current_Limit);
      m_BackLeft_Steer.SetOpenLoopRampRate(Constants::k_Steer_Motor_Open_Loop_Ramp_Rate);
    //Back Right
      m_BackRight_Steer.RestoreFactoryDefaults();
      m_BackRight_Steer.SetInverted(Constants::k_BackRight_Steer_Is_Reversed);
      m_BackRight_Steer.SetSmartCurrentLimit(Constants::k_Steer_Motor_Smart_Current_Limit);
      m_BackRight_Steer.SetSecondaryCurrentLimit(Constants::k_Steer_Motor_Secondary_Current_Limit);
      m_BackRight_Steer.SetOpenLoopRampRate(Constants::k_Steer_Motor_Open_Loop_Ramp_Rate);
  //Wheel Offset
    Initalize_Wheel_Offset();
  //CAN Networking
    //kStatus1
    m_FrontLeft_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    m_FrontRight_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    m_BackLeft_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    m_BackRight_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    m_FrontLeft_Steer.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    m_FrontRight_Steer.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    m_BackLeft_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    m_BackRight_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, Constants::CAN_Adjustment_Values::kStatus1_ms);
    //kStatus2 
    m_FrontLeft_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
    m_FrontRight_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
    m_BackLeft_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
    m_BackRight_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
    m_FrontLeft_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
    m_FrontRight_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
    m_BackLeft_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
    m_BackRight_Drive.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, Constants::CAN_Adjustment_Values::kStatus2_ms);
    BrakeMode();
}
 
void SwerveDrive::PreStepCallback() 
{
  //Drive Motor Speed
  Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed = m_FrontLeft_Drive_Encoder.GetVelocity();
  Code_Gen_Model_U.FrontRight_Drive_Motor_Speed = m_FrontRight_Drive_Encoder.GetVelocity();
  Code_Gen_Model_U.BackLeft_Drive_Motor_Speed = m_BackLeft_Drive_Encoder.GetVelocity();
  Code_Gen_Model_U.BackRight_Drive_Motor_Speed = m_BackRight_Drive_Encoder.GetVelocity();
  //Drive Motor Revolutions
  Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev = m_FrontLeft_Drive_Encoder.GetPosition();
  Code_Gen_Model_U.FrontRight_Drive_Motor_Rev = m_FrontRight_Drive_Encoder.GetPosition();
  Code_Gen_Model_U.BackLeft_Drive_Motor_Rev = m_BackLeft_Drive_Encoder.GetPosition();
  Code_Gen_Model_U.BackRight_Drive_Motor_Rev = m_BackRight_Drive_Encoder.GetPosition();
  //Steer Module Revolutions
  Code_Gen_Model_U.FrontLeft_Steer_Rev = m_FrontLeft_Steer_Encoder.GetPosition().GetValue().value();
  Code_Gen_Model_U.FrontRight_Steer_Rev = m_FrontRight_Steer_Encoder.GetPosition().GetValue().value();
  Code_Gen_Model_U.BackLeft_Steer_Rev = m_BackLeft_Steer_Encoder.GetPosition().GetValue().value();
  Code_Gen_Model_U.BackRight_Steer_Rev = m_BackRight_Steer_Encoder.GetPosition().GetValue().value();
}
void SwerveDrive::PostStepCallback() 
{
  if(Code_Gen_Model_Y.Enable_Wheels > 0)
    WheelsOn();

  if(Code_Gen_Model_Y.Disable_Wheels > 0)
    WheelsOff();

  if(Code_Gen_Model_Y.Reset_Wheel_Offsets > 0)
    Reset_Wheel_Offset();

  if(!Code_Gen_Model_Y.Swerve_Motors_Disabled)
  {
  //Drive Motors
    m_FrontLeft_Drive.Set(Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle);
    m_FrontRight_Drive.Set(Code_Gen_Model_Y.FrontRight_Drive_DutyCycle);
    m_BackLeft_Drive.Set(Code_Gen_Model_Y.BackLeft_Drive_DutyCycle);
    m_BackRight_Drive.Set(Code_Gen_Model_Y.BackRight_Drive_DutyCycle);
  //Steer Motors
    m_FrontLeft_Steer.Set(Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle);
    m_FrontRight_Steer.Set(Code_Gen_Model_Y.FrontRight_Steer_DutyCycle);
    m_BackLeft_Steer.Set(Code_Gen_Model_Y.BackLeft_Steer_DutyCycle);
    m_BackRight_Steer.Set(Code_Gen_Model_Y.BackRight_Steer_DutyCycle);
  }
}

void SwerveDrive::SmartDashboardCallback() 
{

}

void SwerveDrive::ChangeGameStatesCallback()
{

} 

void SwerveDrive::BrakeMode() 
{
  //Drive Motors
  m_FrontLeft_Drive.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
  m_FrontRight_Drive.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
  m_BackLeft_Drive.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
  m_BackRight_Drive.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
  //Steer Motors
  m_FrontLeft_Steer.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
  m_FrontRight_Steer.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
  m_BackLeft_Steer.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
  m_BackRight_Steer.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
}

void SwerveDrive::CoastMode() 
{
  //Drive Motors
  m_FrontLeft_Drive.SetIdleMode(rev::CANSparkMax::IdleMode::kCoast);
  m_FrontRight_Drive.SetIdleMode(rev::CANSparkMax::IdleMode::kCoast);
  m_BackLeft_Drive.SetIdleMode(rev::CANSparkMax::IdleMode::kCoast);
  m_BackRight_Drive.SetIdleMode(rev::CANSparkMax::IdleMode::kCoast);
  //Steer Motors
  m_FrontLeft_Steer.SetIdleMode(rev::CANSparkMax::IdleMode::kCoast);
  m_FrontRight_Steer.SetIdleMode(rev::CANSparkMax::IdleMode::kCoast);
  m_BackLeft_Steer.SetIdleMode(rev::CANSparkMax::IdleMode::kCoast);
  m_BackRight_Steer.SetIdleMode(rev::CANSparkMax::IdleMode::kCoast);
}

void SwerveDrive::Initalize_Wheel_Offset() 
{
  if(!frc::Preferences::ContainsKey(Constants::k_FrontLeft_Wheel_Offset_Key))
    frc::Preferences::SetDouble(Constants::k_FrontLeft_Wheel_Offset_Key, 0.0);
  if(!frc::Preferences::ContainsKey(Constants::k_FrontRight_Wheel_Offset_Key))
    frc::Preferences::SetDouble(Constants::k_FrontRight_Wheel_Offset_Key, 0.0);
  if(!frc::Preferences::ContainsKey(Constants::k_BackLeft_Wheel_Offset_Key))
    frc::Preferences::SetDouble(Constants::k_BackLeft_Wheel_Offset_Key, 0.0);
  if(!frc::Preferences::ContainsKey(Constants::k_BackRight_Wheel_Offset_Key))
    frc::Preferences::SetDouble(Constants::k_BackRight_Wheel_Offset_Key, 0.0);
  SwerveDrive::Set_Wheel_Offset();
}

 /**
   * Wheel calibration procedure:
   * 1. Go into 'Test' game state
   * 2. Push the Disable_Wheels button (Left B13).  This sets steering duty cycle to 0 and puts them into coast mode.
   * 3. Align the wheels with gears facing RIGHT.  If this is done backwards then robot will steer in the opposite directions.
   * 4. Push the Reset_Wheel_Offsets button (Left B12).
   * 5. (optional) Push the Enable_Wheels button (Left B11).  
   */
void SwerveDrive::Reset_Wheel_Offset() 
{
  frc::Preferences::SetDouble(Constants::k_FrontLeft_Wheel_Offset_Key, static_cast<double>(m_FrontLeft_Steer_Encoder.GetPosition().GetValue()));
  frc::Preferences::SetDouble(Constants::k_FrontRight_Wheel_Offset_Key, static_cast<double>(m_FrontRight_Steer_Encoder.GetPosition().GetValue()));
  frc::Preferences::SetDouble(Constants::k_BackLeft_Wheel_Offset_Key, static_cast<double>(m_BackLeft_Steer_Encoder.GetPosition().GetValue()));
  frc::Preferences::SetDouble(Constants::k_BackRight_Wheel_Offset_Key, static_cast<double>(m_BackRight_Steer_Encoder.GetPosition().GetValue()));
  SwerveDrive::Set_Wheel_Offset();
}

void SwerveDrive::Set_Wheel_Offset() 
{
  std::cout << "Swerve Wheel Offsets Set\n";
  Code_Gen_Model_U.BackLeft_Turn_Offset = frc::Preferences::GetDouble(Constants::k_BackLeft_Wheel_Offset_Key, 0.0);
  Code_Gen_Model_U.BackRight_Turn_Offset = frc::Preferences::GetDouble(Constants::k_BackRight_Wheel_Offset_Key, 0.0);
  Code_Gen_Model_U.FrontLeft_Turn_Offset = frc::Preferences::GetDouble(Constants::k_FrontLeft_Wheel_Offset_Key, 0.0);
  Code_Gen_Model_U.FrontRight_Turn_Offset = frc::Preferences::GetDouble(Constants::k_FrontRight_Wheel_Offset_Key, 0.0);
}

void SwerveDrive::WheelsOn() 
{
  std::cout << "Swerve Motors Enabled\n";
  BrakeMode();
}

void SwerveDrive::WheelsOff()
{
  std::cout << "Swerve Motors Disabled\n";
  //stop all motor commands
  m_FrontLeft_Drive.StopMotor();
  m_FrontRight_Drive.StopMotor();
  m_BackLeft_Drive.StopMotor();
  m_BackRight_Drive.StopMotor();
  m_FrontLeft_Steer.StopMotor();
  m_FrontRight_Steer.StopMotor();
  m_BackLeft_Steer.StopMotor();
  m_BackRight_Steer.StopMotor();
  CoastMode();  
}