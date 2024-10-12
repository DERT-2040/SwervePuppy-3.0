#include "lib/include/NeoSpark.h"

NeoSpark::NeoSpark(NeoSparkCreateInfo createInfo)
: sparkMax{createInfo.canID, createInfo.motorType}
{
    initalizeSpark(createInfo);
}

NeoSpark::NeoSpark(int canID, bool includeSensor)
: sparkMax{canID, rev::CANSparkMax::MotorType::kBrushless}
{
    finalCreateInfo.includeSensor = includeSensor;
    initalizeSpark(finalCreateInfo);
}

NeoSpark::NeoSpark(NeoSparkCreateInfo createInfo, int canID, bool isReversed)
: sparkMax{canID, createInfo.motorType}
{
    createInfo.isReversed = isReversed;
    initalizeSpark(createInfo);
}

void NeoSpark::initalizeSpark(NeoSparkCreateInfo createInfo)
{
    sparkMax.RestoreFactoryDefaults();
    sparkMax.SetInverted(createInfo.isReversed);
    sparkMax.SetSmartCurrentLimit(createInfo.smartCurrentLimit);
    sparkMax.SetSecondaryCurrentLimit(createInfo.secondaryCurrentLimit);
    sparkMax.SetOpenLoopRampRate(createInfo.openLoopRampRate);
    sparkMax.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, createInfo.status1PeriodicFramePeriod);
    sparkMax.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, createInfo.status2PeriodicFramePeriod);
    if(createInfo.includeSensor)
        sparkRelEncoder = sparkMax.GetEncoder(createInfo.encoderType, createInfo.countsPerRev);
    finalCreateInfo = createInfo;
}

void NeoSpark::getPositionCallback()
{
    *finalCreateInfo.getPositionCallback = sparkRelEncoder->GetPosition();
}

void NeoSpark::getVelocityCallback()
{
    *finalCreateInfo.getVelocityCallback = sparkRelEncoder->GetVelocity();
}

void NeoSpark::setDutyCycleCallback()
{
    sparkMax.Set(*finalCreateInfo.setDutyCycleCallback);
}