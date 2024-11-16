#pragma once
//std
#include <optional>
#include <cstdint>
//ctre
#include <ctre/Phoenix.h>
#include <ctre/phoenix6/TalonFX.hpp>
#include <ctre/phoenix6/core/CoreTalonFX.hpp>
#include <ctre/phoenix6/configs/Configs.hpp>

struct KrakenTalonCreateInfo
{
    //motor
    int canID;
    bool isReversed = false;
    double supplyCurrentLimit = 15;
    double openLoopRampPeriod = 0;

    //sensor
    double* setDutyCycleCallback = nullptr;
    double* getVelocityCallback = nullptr;
    double* getPositionCallback = nullptr;

    static constexpr KrakenTalonCreateInfo modifyInfo(
        KrakenTalonCreateInfo oldCreateInfo,
        int canID,
        double* setDutyCycleCallback = nullptr,
        double* getVelocityCallback = nullptr,
        double* getPositionCallback = nullptr)
    {
        auto newCreateInfo = oldCreateInfo;
        newCreateInfo.canID = canID;
        newCreateInfo.setDutyCycleCallback = setDutyCycleCallback;
        newCreateInfo.getVelocityCallback = getVelocityCallback;
        newCreateInfo.getPositionCallback = getPositionCallback;
        return newCreateInfo;
    }
};

class KrakenTalon
{
public:
    KrakenTalon(KrakenTalonCreateInfo createInfo);
    KrakenTalon(KrakenTalonCreateInfo createInfo, int canID);
    KrakenTalon(KrakenTalon&& other) noexcept;

    void getPositionCallback();
    void getVelocityCallback();
    void setDutyCycleCallback();
    ctre::phoenix6::hardware::TalonFX talonController;
    KrakenTalonCreateInfo finalCreateInfo{};
private:
    void initalizeTalon(KrakenTalonCreateInfo createInfo);
};