#pragma once

#include "Commons.hpp"

#include <cstdint>

enum class SessionType : uint8_t {
    Unknown,
    Practice1,
    Practice2,
    Practice3,
    PracticeShort,
    Qualification1,
    Qualification2,
    Qualification3,
    QualificationShort,
    QualificationOneLap,
    Race,
    Race2,
    Race3,
    TimeTrial
};

enum class Weather : uint8_t {
    Clear,
    LightCloud,
    Overcast,
    LightRain,
    HeavyRain,
    Storm
};

enum class Formula : uint8_t {
    F1Modern,
    F1Classic,
    F2,
    F1Generic,
    Beta,
    Supercars,
    Esports,
    F2_2021
};

enum class SafetyCarStatus : uint8_t {
    No,
    SC,
    VSC,
    FormationLap
};

enum class BrakingAssist : uint8_t {
    Off,
    Low,
    Medium,
    High
};

enum class GearboxAssist : uint8_t {
    Manual,
    ManualSuggestedGear,
    Auto
};

enum DynamicRacingLine : uint8_t {
    Off,
    CornersOnly,
    Full
};

enum class DynamicRacingLineType : uint8_t {
    TwoD,
    ThreeD
};

enum class SessionLength : uint8_t {
    None,
    VeryShort = 2,
    Short,
    Medium,
    MediumLong,
    Long,
    Full
};

enum class WeatherForecastAccuracy : uint8_t {
    Perfect,
    Approximate
};

#pragma pack(push, 1)
struct MarshalZone {
    float zoneStart;
    FIAFlag zoneFlag;
};

struct WeatherForecastSample {
    SessionType sessionType;
    uint8_t timeOffset;
    Weather weather;
    int8_t trackTemperature;
    int8_t trackTemperatureChange;
    int8_t airTemperature;
    int8_t airTemperatureChange;
    uint8_t rainPercentage;
};

struct SessionPacket { // frequency: 2 per second
    Weather weather;
    int8_t trackTemperature;
    int8_t airTemperature;
    uint8_t totalLaps;
    uint16_t trackLength;
    SessionType sessionType;
    int8_t trackId; // TODO: see appendix
    Formula formula;
    uint16_t sessionTimeLeft;
    uint16_t sessionDuration;
    uint8_t pitSpeedLimit;
    uint8_t gamePaused;
    bool isSpectating;
    uint8_t spectatorCarIndex;
    bool sliProNativeSupport;
    uint8_t numMarshalZones;
    MarshalZone marshalZones[21];
    SafetyCarStatus safetyCarStatus;
    bool networkGame;
    uint8_t numWeatherForecastSamples;
    WeatherForecastSample m_weatherForecastSamples[56];
    WeatherForecastAccuracy forecastAccuracy;
    uint8_t aiDifficulty;
    uint32_t seasonLinkIdentifier;
    uint32_t weekendLinkIdentifier;
    uint32_t sessionLinkIdentifier;
    uint8_t pitStopWindowIdealLap;
    uint8_t pitStopWindowLatestLap;
    uint8_t pitStopRejoinPosition;
    bool steeringAssist;
    BrakingAssist brakingAssist;
    GearboxAssist gearboxAssist;
    bool pitAssist;
    bool pitReleaseAssist;
    bool ERSAssist;
    bool DRSAssist;
    DynamicRacingLine dynamicRacingLine;
    DynamicRacingLineType dynamicRacingLineType;
    uint8_t gameMode; // TODO: see appendix
    uint8_t ruleSet; // TODO: see appendix
    uint32_t timeOfDay;
    SessionLength sessionLength;
};
#pragma pack(pop)
