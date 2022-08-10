#pragma once

#include "Team.hpp"

#include <cstdint>
#include <vector>

class TeamStorage {
public:
    TeamStorage() = default;

    [[nodiscard]] const Team& getById(const uint8_t& id) {
        return *std::find_if(teams.begin(), teams.end(), [id](const Team& team) {
            return team.id == id;
        });
    }

private:
    const std::vector<Team> teams {
        {0, "Mercedes"}, {1, "Ferrari"}, {2, "Red Bull Racing"},
        {3, "Williams"}, {4, "Aston Martin"}, {5, "Alpine"},
        {6, "Alpha Tauri"}, {7, "Haas"}, {8, "McLaren"},
        {9, "Alfa Romeo"}, {85, "Mercedes 2020"}, {86, "Ferrari 2020"},
        {87, "Red Bull 2020"}, {88, "Williams 2020"}, {89, "Racing Point 2020"},
        {90, "Renault 2020"}, {91, "Alpha Tauri 2020"}, {92, "Haas 2020"},
        {93, "McLaren 2020"}, {94, "Alfa Romeo 2020"}, {95, "Aston Martin DB11 V12"},
        {96, "Aston Martin Vantage F1 Edition"}, {97, "Aston Martin Vantage Safety Car"}, {98, "Ferrari F8 Tributo"},
        {99, "Ferrari Roma"}, {100, "McLaren 720S"}, {101, "McLaren Artura"},
        {102, "Mercedes AMG GT Black Series Safety Car"}, {103, "Mercedes AMG GTR Pro"}, {104, "F1 Custom Team"},
        {106, "Prema 2021"}, {107, "Uni-Virtuosi 2021"}, {108, "Carlin 2021"},
        {109, "Hitech 2021"}, {110, " Art GP 2021"}, {111, "MP Motorsport 2021"},
        {112, "Charouz 2021"}, {113, "Dams 2021"}, {114, "Campos 2021"},
        {115, "BWT 2021"}, {116, "Trident 2021"}, {117, "Mercedes AMG GT Black Series"}
    };
};
