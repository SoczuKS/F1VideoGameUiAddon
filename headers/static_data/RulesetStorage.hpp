#pragma once

#include "Ruleset.hpp"

#include <cstdint>
#include <vector>

class RulesetStorage {
public:
    RulesetStorage() = default;

    [[nodiscard]] const Ruleset& getById(const uint8_t& id) {
        return *std::find_if(rulesets.begin(), rulesets.end(), [id](const Ruleset& ruleset) {
            return ruleset.id == id;
        });
    }

private:
    std::vector<Ruleset> rulesets {
        {0, "Practice & Qualifying"},
        {1, "Race"},
        {2, "Time Trial"},
        {4, "Time Attack"},
        {6, "Checkpoint Challenge"},
        {7, "Autocross"},
        {9, "Drift"},
        {10, "Average Speed Zone"},
        {11, "Rival Duel"}
    };
};
