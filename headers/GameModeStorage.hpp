#pragma once

#include "GameMode.hpp"

#include <cstdint>
#include <vector>

class GameModeStorage {
public:
    GameModeStorage() = default;

    [[nodiscard]] const GameMode& getById(const uint8_t& id) {
        return *std::find_if(gameModes.begin(), gameModes.end(), [id](const GameMode& gameMode) {
            return gameMode.id == id;
        });
    }

private:
    std::vector<GameMode> gameModes {
        {0, "Event Mode"},
        {3, "Grand Prix"},
        {5, "Time Trial"},
        {6, "Splitscreen"},
        {7, "Online Custom"},
        {8, "Online League"},
        {11, "Career Invitational"},
        {12, "Championship Invitational"},
        {13, "Championship"},
        {14, "Online Championship"},
        {15, "Online Weekly Event"},
        {19, "Career 22"},
        {20, "Career 22 Online"},
        {127, "Benchmark"}
    };
};
