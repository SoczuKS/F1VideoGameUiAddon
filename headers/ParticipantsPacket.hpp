#pragma once

#include <cstdint>

enum class TelemetryUDPSetting {
    Restricted,
    Public
};

#pragma pack(push, 1)
struct ParticipantData {
    bool aiControlled;
    uint8_t driverId; // TODO: see appendix
    uint8_t networkId;
    uint8_t teamId; // TODO: see appendix
    uint8_t myTeam;
    uint8_t raceNumber;
    uint8_t nationality;
    char name[48];
    TelemetryUDPSetting yourTelemetry;
};

struct ParticipantsPacket { // frequency: every 5s
    uint8_t numberOfActiveCars;
    ParticipantData participants[22];
};
#pragma pack(pop)
