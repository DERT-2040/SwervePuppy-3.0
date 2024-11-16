#include "lib/include/KrakenTalon.h"

// Create talon controller with CAN ID
KrakenTalon::KrakenTalon(KrakenTalonCreateInfo createInfo)
: talonController{createInfo.canID}
{
    initalizeTalon(createInfo);
}

// Configure the talon controller settings
void KrakenTalon::initalizeTalon(KrakenTalonCreateInfo createInfo)
{
    // Get Configurator to Apply configuration settings
    auto& talonConfigurator = talonController.GetConfigurator();

    // Set Direction
    ctre::phoenix6::configs::MotorOutputConfigs motorDirectionConfig;
    motorDirectionConfig.Inverted = createInfo.isReversed;
    talonConfigurator.Apply(motorDirectionConfig);

    // Set Open Loop Ramp Period
    ctre::phoenix6::configs::OpenLoopRampsConfigs rampPeriodConfig;
    rampPeriodConfig.DutyCycleOpenLoopRampPeriod = createInfo.openLoopRampPeriod;
    talonConfigurator.Apply(rampPeriodConfig);

    // Set Current Limiting Configuration
    ctre::phoenix6::configs::CurrentLimitsConfigs currentLimitsConfig;
    currentLimitsConfig.SupplyCurrentLimit = createInfo.supplyCurrentLimit;
    currentLimitsConfig.StatorCurrentLimitEnable = true;
    talonConfigurator.Apply(currentLimitsConfig);

    // Set Neutral Mode Output Behavior
    ctre::phoenix6::configs::MotorOutputConfigs neutralModeConfig;
    neutralModeConfig.NeutralMode = createInfo.neutralMode;
    talonConfigurator.Apply(neutralModeConfig);

    finalCreateInfo = createInfo;
}

// Get Motor Encoder Position
void KrakenTalon::getPositionCallback()
{  
    auto& encoderPositionSignal = talonController.GetPosition();
    encoderPositionSignal.SetUpdateFrequency(50_Hz);
    *finalCreateInfo.getPositionCallback = encoderPositionSignal.GetValueAsDouble();
}

// Get Motor Encoder Velocity
void KrakenTalon::getVelocityCallback()
{
    auto& encoderVelocitySignal = talonController.GetVelocity();
    encoderVelocitySignal.SetUpdateFrequency(50_Hz);
    *finalCreateInfo.getVelocityCallback = encoderVelocitySignal.GetValueAsDouble()*60;  // Convert from Rev/Sec to Rev/Min
}

// Set Motor Duty Cycle
void KrakenTalon::setDutyCycleCallback()
{
    talonController.Set(*finalCreateInfo.setDutyCycleCallback);
}