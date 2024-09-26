#include "include/LineSensor.hh"

void LineSensor::PreStepCallback()
{
    Code_Gen_Model_U.Line_Sensor_TOF_Range = Line_Sensor.GetRange();
}

void LineSensor::PostStepCallback()
{

}

void LineSensor::SmartDashboardCallback()
{
    // SmartDashboard::putNumber("IsNoteThere", SmartDashboard::getDefault().getTable("Vision").getNumber("IsNoteThere"));
}

void LineSensor::GameStateChangeCallback()
{
    
}