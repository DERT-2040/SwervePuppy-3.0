#pragma once
//std
#include <optional>
#include <cstdint>
//rev
#include <ctre/Phoenix.h>
#include <ctre/phoenix6/TalonFX.hpp>
#include <ctre/phoenix6/core/CoreTalonFX.hpp>
#include <ctre/phoenix6/configs/Configs.hpp>

struct KrakenTalonCreateInfo
{
    //motor
    int canID;
    bool isReversed = false;
    uint8_t smartCurrentLimit = 15;
    double secondaryCurrentLimit = 15;
    double openLoopRampRate = 0.00000001;
    int status1PeriodicFramePeriod = 60;
    int status2PeriodicFramePeriod = 60;
    //sensor
    bool includeSensor;
    int countsPerRev = 42;
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
    KrakenTalon(int canID, bool includeSensor);
    KrakenTalon(KrakenTalonCreateInfo createInfo, int canID, bool isReversed);
    KrakenTalon(KrakenTalon&& other) noexcept;

    void getPositionCallback();
    void getVelocityCallback();
    void setDutyCycleCallback();
    ctre::phoenix6::hardware::TalonFX talonController;
    KrakenTalonCreateInfo finalCreateInfo{};
private:
    void initalizeTalon(KrakenTalonCreateInfo createInfo);
};