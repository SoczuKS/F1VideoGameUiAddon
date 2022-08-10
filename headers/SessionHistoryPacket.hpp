#pragma once

#include "Commons.hpp"

#include <cstdint>

enum class LapValidBitFlags : uint8_t {
    LapValid = 1,
    Sector1Valid = 1 << 1,
    Sector2Valid = 1 << 2,
    Sector3Valid = 1 << 3
};

#pragma pack(push, 1)
struct LapHistoryData {
    uint32_t lapTimeInMilliseconds;
    uint16_t sector1TimeInMilliseconds;
    uint16_t sector2TimeInMilliseconds;
    uint16_t sector3TimeInMilliseconds;
};

struct TyreStintHistoryData {
    uint8_t endLap;
    TyreCompound tyreCompound;
    VisualTyreCompound visualTyreCompound;
};

struct SessionHistoryPacket { // frequency: 20 per second bu cycling through cars
    uint8_t carIndex;
    uint8_t numberOfLaps;
    uint8_t numberOfTyreStints;
    uint8_t bestLapTimeLapNumber;
    uint8_t bestSector1TimeLapNumber;
    uint8_t bestSector2TimeLapNumber;
    uint8_t bestSector3TimeLapNumber;
    LapHistoryData lapHistoryData[100];
    TyreStintHistoryData tyreStintsHistoryData[8];
};
#pragma pack(pop)
