// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

//local
#include "Code_Gen_Model_ert_rtw\Code_Gen_Model.h"
#include "lib/include/Component.hh"
#include "include/HIDs.hh"
#include "include/IMU.hh"
#include "include/SwerveDrive.hh"
#include "include/SimulinkSmartDashboardInterface.hh"
#include "include/FMSInfo.hh"
#include "include/PhotonVisionInterface.hh"
#include "include/TelescopingArm.hh"
#include "include/Intake.hh"
#include "include/Shooter.hh" 
#include "include/BallScrew.hh"
#include "include/LineSensor.hh"
#include "include/Climber.hh"

//frc
#include <frc/TimedRobot.h>
//std
#include <iostream>

class Robot : public frc::TimedRobot {
 public:
  /**
   * Runs once when robot turns on
   */
  void RobotInit() override;

  /**
   * Runs every 20ms regardless of what mode the robot is in
   */
  void RobotPeriodic() override;

  /**
   * Runs once when robot changes into Autonomous mode
   */
  void AutonomousInit() override;

  /**
   * runs every 20ms when the robot is in Autonomous mode
   */
  void AutonomousPeriodic() override;

  /**
   * Runs once when robot changes into Teleop mode
   */
  void TeleopInit() override;

  /**
   * runs every 20ms when the robot is in Teleop mode
   */
  void TeleopPeriodic() override;

  /**
   * Runs once when robot changes into Disabled mode
   */
  void DisabledInit() override;

  /**
   * runs every 20ms when the robot is in Disabled mode
   */
  void DisabledPeriodic() override;

  /**
   * Runs once when robot changes into Test mode
   */
  void TestInit() override;

  /**
   * runs every 20ms when the robot is in Test mode
   */
  void TestPeriodic() override;


  /**
   * Runs once when robot changes into Simulation mode
   */
  void SimulationInit() override;

  /**
   * runs every 20ms when the robot is in Simulation mode
   */
  void SimulationPeriodic() override;

private:
  /**
   * Puts all inputs from sensors and HIDs into Simulink
   */
  void PreStep();
  
  /**
   * Takes outputs from simulink and pushes their commands to hardware
   */
  void PostStep();
  
  /**
   * Resets variables when the game state changes (teleop, auto, test, etc.)
   */
  void GameInitValues();

   /**
   * Updates all individal components SmartDashboard values and pushes those updates
   */
  void UpdateSmartDashboardValues();

  /*
   * Below are the instances of the subsystems used by the robot
   * Everything here should be direct hardware control, only
   * functions that manipulate global variables declared by Simulink
   * are exceptions to this rule.
   */

  /**
   * Component Object for Human Input Devices
   */
  HIDs m_HIDs;
  
  /**
   * Component Object for the IMU pigeon2
   */
  IMU m_IMU;
  
  /**
   * Component Object for all Swerve Drive objects such as sensors and motors
   */
  SwerveDrive m_SwerveDrive;
  
  PhotonVisionInterface m_PhotonVisionInterface;
  /**
   * Monitor code execution time
   */
  frc::Tracer m_Tracer{};
  
  /**
   * Component for all Tunable Parameters created by simulink
   */
  SimulinkSmartDashboardInterface m_SimulinkSmartDashboardInterface;  
  
  /**
   * Component that reads the field management system info from smart dashboard and puts it into simulink
   */
  FMSInfo m_FMSInfo;
  /**
   * Component that runs all motors and sensors for the Intake of the 2024 Robot
  */
  Intake m_Intake;

  /**
   * Component that includes all arms and motors and sensors on the shooter mechanism 2024
  */
  Shooter m_Shooter;

  /**
   * Component that represents the ball screw for the 2024 robot
  */
  BallScrew m_BallScrew;

  /**
   * Compentent that represents each motor and encoder for each arm
  */
  TelescopingArm m_TelescopingArm;  

   /**
   * Component for the autonomous line sensor 
  */ 
  LineSensor m_LineSensor;

  /**
   * Component for the autonomous line sensor 
  */ 
  Climber m_Climber;
};
