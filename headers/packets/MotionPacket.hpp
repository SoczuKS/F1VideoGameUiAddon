#pragma once

#include <cstdint>

#pragma pack(push, 1)
struct CarMotionData {
    float worldPositionX;
    float worldPositionY;
    float worldPositionZ;
    float worldVelocityX;
    float worldVelocityY;
    float worldVelocityZ;
    int16_t worldForwardDirectionX;
    int16_t worldForwardDirectionY;
    int16_t worldPositionirectionZ;
    int16_t worldRightDirectionX;
    int16_t worldRightDirectionY;
    int16_t worldRightDirectionZ;
    float gForceLateral;
    float gForceLongitudinal;
    float gForceVertical;
    float yaw;
    float pitch;
    float roll;
};

struct MotionPacket { // frequency: as in menu
    CarMotionData carMotionData[22];
    float suspensionPosition[4];
    float suspensionVelocity[4];
    float suspensionAcceleration[4];
    float wheelSpeed[4];
    float wheelSlip[4];
    float localVelocityX;
    float localVelocityY;
    float localVelocityZ;
    float angularVelocityX;
    float angularVelocityY;
    float angularVelocityZ;
    float angularAccelerationX;
    float angularAccelerationY;
    float angularAccelerationZ;
    float frontWheelsAngle;
};
#pragma pack(pop)
