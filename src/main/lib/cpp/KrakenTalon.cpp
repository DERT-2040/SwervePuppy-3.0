#include "lib/include/KrakenTalon.h"

// Create talon controller with CAN ID
KrakenTalon::KrakenTalon(KrakenTalonCreateInfo createInfo)
: talonController{createInfo.canID, createInfo.canbus},
dutyCycleControl{0}
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
    motorDirectionConfig.Inverted = createInfo.isReversed ? 
        ctre::phoenix6::signals::InvertedValue::CounterClockwise_Positive : 
        ctre::phoenix6::signals::InvertedValue::Clockwise_Positive;
    talonConfigurator.Apply(motorDirectionConfig);

    // Set Open Loop Ramp Period
    ctre::phoenix6::configs::OpenLoopRampsConfigs rampPeriodConfig;
    rampPeriodConfig.DutyCycleOpenLoopRampPeriod = createInfo.openLoopRampPeriod;
    talonConfigurator.Apply(rampPeriodConfig);

    // Set Current Limiting Configuration
    ctre::phoenix6::configs::CurrentLimitsConfigs currentLimitsConfig;
    currentLimitsConfig.SupplyCurrentLimit = createInfo.supplyCurrentLimit;
    currentLimitsConfig.SupplyCurrentLimitEnable = true;
    talonConfigurator.Apply(currentLimitsConfig);

    // Initialize Signal Objects
    if(createInfo.getPositionCallback != nullptr)
        *positionSignal = talonController.GetPosition();
    if(createInfo.getVelocityCallback != nullptr)
        *velocitySignal = talonController.GetVelocity();

    // Initialize Duty Cycle Output Communication
    dutyCycleControl.WithEnableFOC(createInfo.enableFOC);

    // Store for later use
    finalCreateInfo = createInfo;
}

// Get Motor Encoder Position
void KrakenTalon::getPositionCallback()
{  
    *finalCreateInfo.getPositionCallback = positionSignal->GetValueAsDouble();
}

// Get Motor Encoder Velocity
void KrakenTalon::getVelocityCallback()
{  
    *finalCreateInfo.getVelocityCallback = velocitySignal->GetValueAsDouble();
}

// Set Motor Duty Cycle
void KrakenTalon::setDutyCycleCallback()
{
    talonController.SetControl(dutyCycleControl.WithOutput(*finalCreateInfo.setDutyCycleCallback));
}