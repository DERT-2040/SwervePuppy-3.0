#pragma once
#include <photon/PhotonUtils.h>
#include <photon/PhotonCamera.h>
#include <photon/PhotonPoseEstimator.h>

#include <frc/apriltag/AprilTagFieldLayout.h>
#include <frc/apriltag/AprilTagFields.h>
#include <frc/geometry/Pose2d.h>
#include <frc/geometry/Transform3d.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <math.h>

#include "lib/include/Component.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

#include <memory>
#include "units/time.h"

#include <frc/apriltag/AprilTagFieldLayout.h>
#include <frc/apriltag/AprilTagFields.h>

class PhotonVisionInterface : public Component
{
public:
    PhotonVisionInterface();
    frc::Pose2d GetEstimatedGlobalPose();
    double GetGlobalPoseAmbiguity();

    /**
     * @Override
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
  /*
    // Makes a apriltag feild layout for our shop 
    frc::AprilTag tag1 = frc::AprilTag(1, frc::Pose3d(frc::Translation3d(0.041275_m, 0.3937_m, 0.51435_m), frc::Rotation3d(0_rad, 0_rad, 0_rad)));
    frc::AprilTag tag2 = frc::AprilTag(2, frc::Pose3d(frc::Translation3d(2.714625_m, 4.518025_m, 0.5842_m), frc::Rotation3d(0_rad, 0_rad, 4.71238898_rad))); 
    frc::AprilTag tag3 = frc::AprilTag(3, frc::Pose3d(frc::Translation3d(5.870575_m, 2.74955_m, 1.1811_m), frc::Rotation3d(0_rad, 0_rad, 3.1415926535897_rad)));
    frc::AprilTag tag4 = frc::AprilTag(4, frc::Pose3d(frc::Translation3d(5.870575_m, 1.20015_m, 0.8382_m), frc::Rotation3d(0_rad, 0_rad, 3.1415926535897_rad)));
    frc::AprilTag tag5 = frc::AprilTag(5, frc::Pose3d(frc::Translation3d(4.486275_m, 0.03175_m, 0.873125_m), frc::Rotation3d(0_rad, 0_rad, 1.570796327_rad))); 
    frc::AprilTag tag6 = frc::AprilTag(6, frc::Pose3d(frc::Translation3d(0.041275_m, 2.286_m, 0.52705_m), frc::Rotation3d(0_rad, 0_rad, 0_rad)));
    frc::AprilTag tag7 = frc::AprilTag(7, frc::Pose3d(frc::Translation3d(2.441575_m, 0_m, 0.4953_m), frc::Rotation3d(0_rad, 0_rad, 1.570796327_rad)));
    frc::AprilTag tag8 = frc::AprilTag(8, frc::Pose3d(frc::Translation3d(0_m, 4.098925_m, 0.473075_m), frc::Rotation3d(0_rad, 0_rad, 0_rad)));

    std::vector<frc::AprilTag> AprilTagList{tag1, tag2, tag3, tag4, tag5, tag6, tag7, tag8};
   
    frc::AprilTagFieldLayout AprilTagFieldLayout = frc::AprilTagFieldLayout(AprilTagList, 4.5212_m, 4.572_m);
*/
  const frc::Transform3d robotToCam{
        frc::Translation3d{0.3556_m, -0.187325_m, -0.2667_m},
        frc::Rotation3d{0_rad, -0.383972435_rad, -0.052359878_rad}};
  
  photon::PhotonPoseEstimator photonEstimator{
      frc::LoadAprilTagLayoutField(frc::AprilTagField::k2024Crescendo),
      photon::PoseStrategy::MULTI_TAG_PNP_ON_COPROCESSOR,
      photon::PhotonCamera{"FRONTCAMERA"}, robotToCam};

  const std::shared_ptr<photon::PhotonCamera> camera = photonEstimator.GetCamera();
    
  frc::Pose2d robot2dPose{};
  
  double averageRobotPoseAmbiguity = 0;
  double AT_Tag_7_Yaw = 0;
  double AT_Tag_6_Yaw = 0;
  double AT_Tag_5_Yaw = 0;
  double AT_Tag_4_Yaw = 0;
  double AT_Tag_11_Yaw = 0;
  double AT_Tag_12_Yaw = 0;
  double AT_Tag_13_Yaw = 0;
  double AT_Tag_14_Yaw = 0;
  double AT_Tag_15_Yaw = 0;
  double AT_Tag_16_Yaw = 0;
  bool AT_Tag_4_Found = false;
  bool AT_Tag_5_Found = false;
  bool AT_Tag_6_Found = false;
  bool AT_Tag_7_Found = false;
  bool AT_Tag_11_Found = false;
  bool AT_Tag_12_Found = false;
  bool AT_Tag_13_Found = false;
  bool AT_Tag_14_Found = false;
  bool AT_Tag_15_Found = false;
  bool AT_Tag_16_Found = false;
};