//local
#include "include/IMU.h"

void IMU::PreStepCallback()
{
    Code_Gen_Model_U.Gyro_Angle = m_Pigeon2.GetYaw().GetValue().value();
}

void IMU::PostStepCallback()
{

}

void IMU::SmartDashboardCallback()
{

}

void IMU::GameStateChangeCallback()
{

}

void IMU::Reset() {
    m_Pigeon2.Reset();
}
IMU::IMU() {
    Reset();
}