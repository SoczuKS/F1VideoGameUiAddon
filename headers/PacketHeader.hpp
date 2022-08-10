#pragma once

#include <cstdint>

enum class PacketId : uint8_t {
    Motion,
    Session,
    LapData,
    Event,
    Participants,
    CarSetups,
    CarTelemetry,
    CarStatus,
    FinalClassification,
    LobbyInfo,
    CarDamage,
    SessionHistory
};

#pragma pack(push, 1)
struct PacketHeader {
    uint16_t packetFormat;
    uint8_t gameMajorVersion;
    uint8_t gameMinorVersion;
    uint8_t packetVersion;
    PacketId packetId;
    uint64_t sessionUid;
    float sessionTime;
    uint32_t frameIdentifier;
    uint8_t playerCarIndex;
    uint8_t secondaryPlayerCarIndex;
};
#pragma pack(pop)
