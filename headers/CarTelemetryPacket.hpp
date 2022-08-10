#pragma once

#include <cstdint>

enum class Gear : int8_t {
    Reverse = -1,
    Neutral,
    Gear1,
    Gear2,
    Gear3,
    Gear4,
    Gear5,
    Gear6,
    Gear7,
    Gear8
};

enum class MFDPanel : uint8_t { // may vary depending on game mode
    CarSetup,
    Pits,
    Damage,
    Engine,
    Temperatures,
    Closed = 255
};

#pragma pack(push, 1)
struct CarTelemetry {
    uint16_t speed;
    float throttle;
    float steer;
    float brake;
    uint8_t clutch;
    Gear gear;
    uint16_t engineRPM;
    bool drs;
    uint8_t revLightsPercent;
    uint16_t revLightsBitValue;
    uint16_t brakesTemperature[4];
    uint8_t tyresSurfaceTemperature[4];
    uint8_t tyresInnerTemperature[4];
    uint16_t engineTemperature;
    float tyresPressure[4];
    uint8_t surfaceType[4]; // TODO: see appendix
};

struct CarTelemetryPacket {
    CarTelemetry carTelemetryData[22];
    MFDPanel mfdPanel;
    MFDPanel mfPanelSecondaryPlayer;
    Gear suggestedGear;
};
#pragma pack(pop)
