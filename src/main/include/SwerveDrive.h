#pragma once

//local
#include "include/Constants.h"
#include "lib/include/Component.h"
#include "lib/include/NeoSet.h"
#include "lib/include/KrakenSet.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"
//frc
#include <frc/DutyCycleEncoder.h>
#include <frc/Preferences.h>
#include <frc/smartdashboard/SmartDashboard.h> 
//rev
#include <rev/CANSparkMax.h>
#include <rev/SparkRelativeEncoder.h>
//ctr
#include <ctre/phoenix6/CANcoder.hpp>
//etc
#include <frc/smartdashboard/SmartDashboard.h>

namespace Drive = Constants::SwerveMotorsCreateInfo::Drive;
namespace Steer = Constants::SwerveMotorsCreateInfo::Steer;
namespace SwerveInfo = Constants::SwerveInfo;

class SwerveDrive : public Component
{
public:
  SwerveDrive();
    
    /**
     * Runs before the step function is called in the main loop
     */
    void PreStepCallback();

    /**
     * Runs after the step function is called in the main loop
     */
    void PostStepCallback();
    
    /**
     * See PostStep documentation in Robot.h
     */
    void ChangeGameStatesCallback();

    /**
     * Puts values to the SmartDashboard via the SD Callbacks function
    */
    void SmartDashboardCallback();
    
    /*
     * X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X
     * X X X X                 Class Specific Methods                  X X X X
     * X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X X
     */

    /**
     * Creates the wheel offset preferences if they have not been created
     */
    void Initalize_Wheel_Offset();

    /**
     * Sets the simulink variables for wheel offsets to what is in the robot preferences
     */
    void Set_Wheel_Offset();

private:
    KrakenSet swerveDriveMotors
  {
    {
      Drive::frontLeft, Drive::frontRight,
      Drive::backLeft, Drive::backRight,
    }
  };
  
  NeoSet swerveSteerMotors
  {
    {
      Steer::frontLeft, Steer::frontRight,
      Steer::backLeft, Steer::backRight
    }
  };

  //Steer Absolute Encoders
    ctre::phoenix6::hardware::CANcoder m_FrontLeft_Steer_Encoder{SwerveInfo::k_FrontLeft_Steer_Encoder_ID, "uno"};
    ctre::phoenix6::hardware::CANcoder m_FrontRight_Steer_Encoder{SwerveInfo::k_FrontRight_Steer_Encoder_ID, "uno"};
    ctre::phoenix6::hardware::CANcoder m_BackLeft_Steer_Encoder{SwerveInfo::k_BackLeft_Steer_Encoder_ID, "uno"};
    ctre::phoenix6::hardware::CANcoder m_BackRight_Steer_Encoder{SwerveInfo::k_BackRight_Steer_Encoder_ID, "uno"};
};

