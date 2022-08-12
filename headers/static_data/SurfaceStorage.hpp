#pragma once

#include "Surface.hpp"

#include <cstdint>
#include <vector>

class SurfaceStorage {
public:
    SurfaceStorage() = default;

    [[nodiscard]] const Surface& getById(const uint8_t& id) {
        return *std::find_if(surfaces.begin(), surfaces.end(), [id](const Surface& surface) {
            return surface.id == id;
        });
    }

private:
    std::vector<Surface> surfaces {
        {0, "Tarmac"},
        {1, "Rumble strip"},
        {2, "Concrete"},
        {3, "Rock"},
        {4, "Gravel"},
        {5, "Mud"},
        {6, "Sand"},
        {7, "Grass"},
        {8, "Water"},
        {9, "Cobblestone"},
        {10, "Metal"},
        {11, "Ridged"},
    };
};
