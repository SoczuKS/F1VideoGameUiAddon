#pragma once

#include "CarDamagePacket.hpp"
#include "CarSetupsPacket.hpp"
#include "CarStatusPacket.hpp"
#include "CarTelemetryPacket.hpp"
#include "EventPacket.hpp"
#include "FinalClassificationPacket.hpp"
#include "LapDataPacket.hpp"
#include "LobbyInfoPacket.hpp"
#include "MotionPacket.hpp"
#include "PacketHeader.hpp"
#include "ParticipantsPacket.hpp"
#include "SessionHistoryPacket.hpp"
#include "SessionPacket.hpp"

#pragma pack(push, 1)
struct Packet {
    PacketHeader header;

    union {
        CarDamagePacket carDamagePacket;
        CarSetupsPacket carSetupsPacket;
        CarStatusPacket carStatusPacket;
        CarTelemetryPacket carTelemetryPacket;
        EventPacket eventPacket;
        FinalClassificationPacket finalClassificationPacket;
        LapDataPacket lapDataPacket;
        LobbyInfoPacket lobbyInfoPacket;
        MotionPacket motionPacket;
        ParticipantsPacket participantsPacket;
        SessionHistoryPacket sessionHistoryPacket;
        SessionPacket sessionPacket;
    } packetData;
};
#pragma pack(pop)
