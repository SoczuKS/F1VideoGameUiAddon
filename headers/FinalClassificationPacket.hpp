#pragma once

#include "Commons.hpp"

#include <cstdint>

#pragma pack(push, 1)
struct FinalClassification {
    uint8_t position;
    uint8_t numberOfLaps;
    uint8_t startingPosition;
    uint8_t points;
    uint8_t numberOfPitStops;
    ResultStatus resultStatus;
    uint32_t bestLapTimeInMilliseconds;
    double totalRaceTime;
    uint8_t penaltiesTime;
    uint8_t numberOfPenalties;
    uint8_t numberOfTyreStints;
    TyreCompound tyreStints[8];
    VisualTyreCompound visualTyreStints[8];
    uint8_t tyreStintsEndLaps[8];
};

struct FinalClassificationPacket { // frequency: once at the end of a race
    uint8_t numberOfCars;
    FinalClassification finalClassificationData[22];
};
#pragma pack(pop)
