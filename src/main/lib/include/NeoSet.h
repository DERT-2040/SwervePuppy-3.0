#pragma once

//std
#include <algorithm>
#include <vector>
#include <functional>
//local
#include "lib/include/NeoSpark.h"
//rev
#include <rev/CANSparkMax.h>
#include <rev/SparkRelativeEncoder.h>

class NeoSet
{
public:
    NeoSet();
    NeoSet(std::initializer_list<NeoSparkCreateInfo> createInfos);
    void stop();
    void set(double dutyCycle);
    void setAreBreakingWhenIdle(bool areBreaking);
    void pushData();
    void pullCommands();
private:
    void addCallbacks(NeoSpark& motor);
    std::vector<std::unique_ptr<NeoSpark>> motorSet;
    std::vector<std::function<void()>> pushDataCalbacks;
    std::vector<std::function<void()>> pullCommandCalbacks;
};