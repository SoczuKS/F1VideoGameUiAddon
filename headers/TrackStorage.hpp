#pragma once

#include "Track.hpp"

#include <cstdint>
#include <vector>

class TrackStorage {
public:
    TrackStorage() = default;

    [[nodiscard]] const Track& getById(const uint8_t& id) {
        return *std::find_if(tracks.begin(), tracks.end(), [id](const Track& track) {
            return track.id == id;
        });
    }

private:
    const std::vector<Track> tracks {
        {0, "Melbourne"},
        {1, "Paul Ricard"},
        {2, "Shanghai"},
        {3, "Sakhir"},
        {4, "Catalunya"},
        {5, "Monaco"},
        {6, "Montreal"},
        {7, "Silverstone"},
        {8, "Hockenheim"},
        {9, "Hungaroring"},
        {10, "Spa"},
        {11, "Monza"},
        {12, "Singapore"},
        {13, "Suzuka"},
        {14, "Abu Dhabi"},
        {15, "Texas"},
        {16, "Brazil"},
        {17, "Austria"},
        {18, "Sochi"},
        {19, "Mexico"},
        {20, "Baku"},
        {21, "Sakhir Short"},
        {22, "Silverstone Short"},
        {23, "Texas Short"},
        {24, "Suzuka Short"},
        {25, "Hanoi"},
        {26, "Zandvoort"},
        {27, "Imola"},
        {28, "Portimão"},
        {29, "Jeddah"},
        {30, "Miami"}
    };
};
