#include "lib/include/KrakenTalon.h"

KrakenTalon::KrakenTalon(KrakenTalonCreateInfo createInfo)
: talonController{createInfo.canID}
{
    initalizeTalon(createInfo);
}

KrakenTalon::KrakenTalon(KrakenTalonCreateInfo createInfo, int canID, bool isReversed)
: talonController{canID}
{
    createInfo.isReversed = isReversed;
    initalizeTalon(createInfo);
}

void KrakenTalon::initalizeTalon(KrakenTalonCreateInfo createInfo)
{
    // Get Configurator to Apply configuration settings
    auto& talonConfigurator = talonController.GetConfigurator();

    // Set Direction
    ctre::phoenix6::configs::MotorOutputConfigs motorDirection;
    motorDirection.Inverted = createInfo.isReversed;
    talonConfigurator.Apply(motorDirection);

    // Set Open Loop Ramp Rate
    ctre::phoenix6::configs::OpenLoopRampsConfigs rampPeriod;
    rampPeriod.DutyCycleOpenLoopRampPeriod = createInfo.openLoopRampPeriod;
    talonConfigurator.Apply(rampPeriod);

    // Set Current Limiting Configuration
    ctre::phoenix6::configs::CurrentLimitsConfigs currentLimits;
    currentLimits.SupplyCurrentLimit = createInfo.supplyCurrentLimit;
    currentLimits.StatorCurrentLimitEnable = true;
    talonConfigurator.Apply(currentLimits);

    // Get Motor Encoder Velocity
    auto& encoderVelocitySignal = talonController.GetVelocity();
    double encoderVelocity = encoderVelocitySignal.GetValueAsDouble()*60;    // Convert from Rev/Sec to Rev/Min

    // Get Motor Encoder Position
    auto& encoderPositionSignal = talonController.GetPosition();
    double encoderPosition = encoderPositionSignal.GetValueAsDouble();

    /*
    sparkMax.RestoreFactoryDefaults(); - no equivalent function
    sparkMax.SetInverted(createInfo.isReversed);
    sparkMax.SetSmartCurrentLimit(createInfo.smartCurrentLimit);
    sparkMax.SetSecondaryCurrentLimit(createInfo.secondaryCurrentLimit);
    sparkMax.SetOpenLoopRampRate(createInfo.openLoopRampRate);
    sparkMax.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus1, createInfo.status1PeriodicFramePeriod);
    sparkMax.SetPeriodicFramePeriod(rev::CANSparkLowLevel::PeriodicFrame::kStatus2, createInfo.status2PeriodicFramePeriod);
    if(createInfo.includeSensor)
        sparkRelEncoder = sparkMax.GetEncoder(createInfo.encoderType, createInfo.countsPerRev);
    finalCreateInfo = createInfo;
    */
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