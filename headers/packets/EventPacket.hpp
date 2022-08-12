#pragma once

#include <array>
#include <cstdint>
#include <map>

enum class EventType : uint8_t {
    SessionStarted,
    SessionEnded,
    FastestLap,
    Retirement,
    DRSEnabled,
    DRSDisabled,
    TeamMateInPits,
    ChequeredFlag,
    RaceWinner,
    PenaltyIssued,
    SpeedTrapTriggered,
    StartLights,
    LightsOut,
    DriveThroughServed,
    StopAndGoServed,
    Flashback,
    ButtonStatus
};

const std::map<std::array<uint8_t, 4>, EventType> eventsTypeMapping {
    {{'S', 'S', 'T', 'A'}, EventType::SessionStarted},
    {{'S', 'E', 'N', 'D'}, EventType::SessionEnded},
    {{'F', 'T', 'L', 'P'}, EventType::FastestLap},
    {{'R', 'T', 'M', 'T'}, EventType::Retirement},
    {{'D', 'R', 'S', 'E'}, EventType::DRSEnabled},
    {{'D', 'R', 'S', 'D'}, EventType::DRSDisabled},
    {{'T', 'M', 'P', 'T'}, EventType::TeamMateInPits},
    {{'C', 'H', 'Q', 'F'}, EventType::ChequeredFlag},
    {{'R', 'C', 'W', 'N'}, EventType::RaceWinner},
    {{'P', 'E', 'N', 'A'}, EventType::PenaltyIssued},
    {{'S', 'P', 'T', 'P'}, EventType::SpeedTrapTriggered},
    {{'S', 'T', 'L', 'G'}, EventType::StartLights},
    {{'L', 'G', 'O', 'T'}, EventType::LightsOut},
    {{'D', 'T', 'S', 'V'}, EventType::DriveThroughServed},
    {{'S', 'G', 'S', 'V'}, EventType::StopAndGoServed},
    {{'F', 'L', 'B', 'K'}, EventType::Flashback},
    {{'B', 'U', 'T', 'N'}, EventType::ButtonStatus}
};

#pragma pack(push, 1)
union EventDataDetails {
    struct {
        uint8_t vehicleIndex;
        float lapTime;
    } FastestLap;

    struct {
        uint8_t vehicleIndex;
    } Retirement;

    struct {
        uint8_t vehicleIndex;
    } TeamMateInPits;

    struct {
        uint8_t vehicleIndex;
    } RaceWinner;

    struct {
        uint8_t penaltyType; // TODO: see appendix
        uint8_t infringementType; // TODO: see appendix
        uint8_t vehicleIndex;
        uint8_t otherVehicleIndex;
        uint8_t time;
        uint8_t lapNumber;
        uint8_t placesGained;
    } Penalty;

    struct {
        uint8_t vehicleIndex;
        float speed;
        bool isOverallFastestInSession;
        bool isDriverFastestInSession;
        uint8_t fastestVehicleIndexInSession;
        float fastestSpeedInSession;
    } SpeedTrap;

    struct {
        uint8_t numberOfLights;
    } StartLights;

    struct {
        uint8_t vehicleIndex;
    } driveThroughPenaltyServed;

    struct {
        uint8_t vehicleIndex;
    } stopAndGoPenaltyServed;

    struct {
        uint32_t flashbackFrameIdentifier;
        float flashbackSessionTime;
    } Flashback;

    struct {
        uint32_t buttonStatus; // TODO: see appendix
    } Buttons;
};

struct EventPacket { // frequency: when the event occurs
    uint8_t eventStringCode[4];
    EventDataDetails eventDetails;
};
#pragma pack(pop)
