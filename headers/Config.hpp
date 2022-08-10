#pragma once

#include <cstdint>

class Config {
public:
    Config() = default;

    [[nodiscard]] const uint16_t& getListeningPort() { return listeningPort; }

private:
    uint16_t listeningPort{ 20777 };
};
