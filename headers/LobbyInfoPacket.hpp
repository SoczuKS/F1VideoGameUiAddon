#pragma once

#include <cstdint>

enum class ReadyStatus : uint8_t {
    NotReady,
    Ready,
    Spectator
};

#pragma pack(push, 1)
struct LobbyInfo {
    bool aiControlled;
    uint8_t teamId; // TODO: see appendix
    uint8_t nationality;
    char name[48];
    uint8_t carNumber;
    ReadyStatus readyStatus;
};

struct LobbyInfoPacket { // frequency: 2 per second, in lobby
    uint8_t numberOfPlayers;
    LobbyInfo lobbyInfoData[22];
};
#pragma pack(pop)
