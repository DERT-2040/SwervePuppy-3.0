#include "Include/FMSInfo.hh"

void FMSInfo::PreStepCallback()
{

}

void FMSInfo::PostStepCallback()
{

}

void FMSInfo::SmartDashboardCallback()
{

}

void FMSInfo::GameStateChangeCallback()
{
    std::optional<frc::DriverStation::Alliance> CurrentAlliance = frc::DriverStation::GetAlliance();
    if(!CurrentAlliance.has_value())
        Code_Gen_Model_U.IsBlueAlliance = 1;
    else
        Code_Gen_Model_U.IsBlueAlliance = CurrentAlliance.value();
}