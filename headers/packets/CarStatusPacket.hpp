#pragma once

#include "Commons.hpp"

#include <cstdint>

enum class TractionControl : uint8_t {
    Off,
    Medium,
    Full
};

enum class FuelMix : uint8_t {
    Lean,
    Standard,
    Rich,
    Max
};

enum class ERSDeployMode : uint8_t {
    None,
    Medium,
    Hotlap,
    Overtake
};

#pragma pack(push, 1)
struct CarStatus {
    TractionControl tractionControl;
    bool antiLockBrakes;
    FuelMix fuelMix;
    uint8_t frontBrakeBias;
    bool pitLimiterStatus;
    float fuelInTank;
    float fuelCapacity;
    float fuelRemainingLaps;
    uint16_t maxRpm;
    uint16_t idleRpm;
    uint8_t maxGears;
    bool drsAllowed;
    uint16_t drsActivationDistance;
    TyreCompound actualTyreCompound;
    VisualTyreCompound visualTyreCompound;
    uint8_t tyresAgeLaps;
    FIAFlag vehicleFiaFlags;
    float ersStoreEnergy;
    ERSDeployMode ersDeployMode;
    float ersHarvestedThisLapMguK;
    float ersHarvestedThisLapMguH;
    float ersDeployedThisLap;
    bool networkPaused;
};

struct CarStatusPacket { // frequency: as in menu
    CarStatus carStatusData[22];
};
#pragma pack(pop)
