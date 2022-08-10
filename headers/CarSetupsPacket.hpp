#pragma once

#include <cstdint>

#pragma pack(push, 1)
struct CarSetupData {
    uint8_t frontWing;
    uint8_t rearWing;
    uint8_t differantialOnThrottle;
    uint8_t differantialOffThrottle;
    float frontCamber;
    float rearCamber;
    float frontToe;
    float rearToe;
    uint8_t frontSuspension;
    uint8_t rearSuspension;
    uint8_t frontAntiRollBar;
    uint8_t rearAntiRollBar;
    uint8_t frontSuspensionHeight;
    uint8_t rearSuspensionHeight;
    uint8_t brakePressure;
    uint8_t brakeBias;
    float frontLeftTyrePressure;
    float frontRightTyrePressure;
    float rearLeftTyrePressure;
    float rearRightTyrePressure;
    uint8_t ballast;
    float fuelLoad;
};

struct CarSetupsPacket { // frequency: 2 per second
    CarSetupData carSetups[22];
};
#pragma pack(pop)
