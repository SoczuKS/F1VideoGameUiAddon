#pragma once

#include <cstdint>

#pragma pack(push, 1)
struct CarDamage {
    float tyresWear[4];
    uint8_t tyresDamage[4];
    uint8_t brakesDamage[4];
    uint8_t frontLeftWingDamage;
    uint8_t frontRightWingDamage;
    uint8_t rearWingDamage;
    uint8_t floorDamage;
    uint8_t diffuserDamage;
    uint8_t sidepodDamage;
    bool drsFault;
    bool ersFault;
    uint8_t gearboxDamage;
    uint8_t engineDamage;
    uint8_t engineMguhWear;
    uint8_t engineEsWear;
    uint8_t engineCeWear;
    uint8_t engineIceWear;
    uint8_t engineMgukWear;
    uint8_t engineTcWear;
    bool engineBlown;
    bool engineSeized;
};

struct CarDamagePacket { // frequency: 2 per second
    CarDamage carDamageData[22];
};
#pragma pack(pop)
