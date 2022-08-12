#pragma once

#include "Commons.hpp"

#include <cstdint>

enum class PitStatus : uint8_t {
    None,
    Pitting,
    InPitArea
};

enum class Sector : uint8_t {
    Sector1,
    Sector2,
    Sector3
};

enum class DriverStatus : uint8_t {
    InGarage,
    FlyingLap,
    InLap,
    OutLap,
    OnTrack
};

#pragma pack(push, 1)
struct LapData {
    uint32_t lastLapTimeInMS;
    uint32_t currentLapTimeInMS;
    uint16_t sector1TimeInMS;
    uint16_t sector2TimeInMS;
    float lapDistance;
    float totalDistance;
    float safetyCarDelta;
    uint8_t carPosition;
    uint8_t currentLapNum;
    PitStatus pitStatus;
    uint8_t numPitStops;
    Sector sector;
    uint8_t currentLapInvalid;
    uint8_t penalties;
    uint8_t warnings;
    uint8_t numUnservedDriveThroughPens;
    uint8_t numUnservedStopGoPens;
    uint8_t gridPosition;
    DriverStatus driverStatus;
    ResultStatus resultStatus;
    bool pitLaneTimerActive;
    uint16_t pitLaneTimeInLaneInMS;
    uint16_t pitStopTimerInMS;
    bool pitStopShouldServePenalty;
};

struct LapDataPacket { // frequency: as in menu
    LapData lapData[22];
    uint8_t timeTrialPersonalBestCarIndex;
    uint8_t timeTrialRivalCarIndex;
};
#pragma pack(pop)
