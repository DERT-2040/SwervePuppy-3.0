#include "include/PhotonVisionInterface.hh"

void PhotonVisionInterface::PreStepCallback() 
{
    // Getting data from the PoseEstimator
    auto globalPose = photonEstimator.Update();
    if (globalPose.has_value()) {
        robot2dPose = globalPose->estimatedPose.ToPose2d();
    }
    auto latestPipelineResult = camera.get()->GetLatestResult();
    const auto& photonTrackedTargets = latestPipelineResult.GetTargets();
    // This will average all of the individual PoseAmbiguitys that we get from the tags, so we can use the average in the Kalman Filter.
    averageRobotPoseAmbiguity = 1;
    if (latestPipelineResult.HasTargets()) {
        double tmp_totalRobotPoseAmbiguity = 0;
        for (const auto& target : photonTrackedTargets) {
            int targetId = target.GetFiducialId();
            tmp_totalRobotPoseAmbiguity += static_cast<double>(target.GetPoseAmbiguity());
            if (targetId == 11) 
            {
                AT_Tag_11_Found = true;
            }
            if (targetId == 12) 
            {
                AT_Tag_12_Found = true;
            }
            if (targetId == 13) 
            {
                AT_Tag_13_Found = true;
            }
            if (targetId == 14) 
            {
                AT_Tag_14_Found = true;
            }
            if (targetId == 15) 
            {
                AT_Tag_15_Found = true;
            }
            if (targetId == 16) 
            {
                AT_Tag_16_Found = true;
            }
        }
        averageRobotPoseAmbiguity = tmp_totalRobotPoseAmbiguity / photonTrackedTargets.size();
    }
    // Inputs Values into Simulink Model
    Code_Gen_Model_U.Photon_Est_Pose_X = robot2dPose.X().value();
    Code_Gen_Model_U.Photon_Est_Pose_Y = robot2dPose.Y().value();
    Code_Gen_Model_U.AT_Tag_11_Found = AT_Tag_11_Found;
    Code_Gen_Model_U.AT_Tag_12_Found = AT_Tag_12_Found;
    Code_Gen_Model_U.AT_Tag_13_Found = AT_Tag_13_Found;
    Code_Gen_Model_U.AT_Tag_14_Found = AT_Tag_14_Found;
    Code_Gen_Model_U.AT_Tag_15_Found = AT_Tag_15_Found;
    Code_Gen_Model_U.AT_Tag_16_Found = AT_Tag_16_Found;
    
    Code_Gen_Model_U.Photon_Est_Pose_Ambiguity = averageRobotPoseAmbiguity;
}

void PhotonVisionInterface::PostStepCallback() 
{

}

void PhotonVisionInterface::SmartDashboardCallback() 
{

}

void PhotonVisionInterface::GameStateChangeCallback()
{
    
}

frc::Pose2d PhotonVisionInterface::GetEstimatedGlobalPose() 
{
    return robot2dPose;
}

double PhotonVisionInterface::GetGlobalPoseAmbiguity() 
{
    return averageRobotPoseAmbiguity;
}

PhotonVisionInterface::PhotonVisionInterface() 
{
    photonEstimator.SetMultiTagFallbackStrategy(photon::PoseStrategy::LOWEST_AMBIGUITY);
}