#pragma once

#include <cstdint>

enum class FIAFlag : int8_t {
    Invalid = -1,
    None,
    Green,
    Blue,
    Yellow,
    Red
};

enum class ResultStatus : uint8_t {
    Invalid,
    Inactive,
    Active,
    Finished,
    DNF,
    DSQ,
    NotClassified,
    Retired
};

enum class TyreCompound : uint8_t {
    F1ClassicDry = 9,
    F1ClassicWet = 10,
    F2SuperSoft = 11,
    F2Soft = 12,
    F2Medium = 13,
    F2Hard = 14,
    F2Wet = 15,
    F1ModernC5 = 16,
    F1ModernC4 = 17,
    F1ModernC3 = 18,
    F1ModernC2 = 19,
    F1ModernC1 = 20,
    F1ModernIntermediate = 7,
    F1ModernWet = 8,
};

enum class VisualTyreCompound : uint8_t {
    F1ClassicDry = 9,
    F1ClassicWet = 10,
    F2SuperSoft = 19,
    F2Soft = 20,
    F2Medium = 21,
    F2Hard = 22,
    F2Wet = 15,
    F1ModernSoft = 16,
    F1ModernMedium = 17,
    F1ModernHard = 18,
    F1ModernIntermediate = 7,
    F1ModernWet = 8
};

enum class Wheel : uint8_t {
    RearLeft,
    RearRight,
    FrontLeft,
    FrontRight
};
