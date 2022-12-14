#pragma once

#include "Nationality.hpp"

#include <cstdint>
#include <vector>

class NationalityStorage {
public:
    NationalityStorage() = default;

    [[nodiscard]] const Nationality& getById(const uint8_t& id) {
        return *std::find_if(nationalities.begin(), nationalities.end(), [id](const Nationality& nationality){
            return nationality.id == id;
        });
    }

private:
    const std::vector<Nationality> nationalities {
        {1, "American"},
        {31, "Greek"},
        {61, "Paraguayan"},
        {2, "Argentinean"},
        {32, "Guatemalan"},
        {62, "Peruvian"},
        {3, "Australian"},
        {33, "Honduran"},
        {63, "Polish"},
        {4, "Austrian"},
        {34, "Hong Konger"},
        {64, "Portuguese"},
        {5, "Azerbaijani"},
        {35, "Hungarian"},
        {65, "Qatari"},
        {6, "Bahraini"},
        {36, "Icelander"},
        {66, "Romanian"},
        {7, "Belgian"},
        {37, "Indian"},
        {67, "Russian"},
        {8, "Bolivian"},
        {38, "Indonesian"},
        {68, "Salvadoran"},
        {9, "Brazilian"},
        {39, "Irish"},
        {69, "Saudi"},
        {10, "British"},
        {40, "Israeli"},
        {70, "Scottish"},
        {11, "Bulgarian"},
        {41, "Italian"},
        {71, "Serbian"},
        {12, "Cameroonian"},
        {42, "Jamaican"},
        {72, "Singaporean"},
        {13, "Canadian"},
        {43, "Japanese"},
        {73, "Slovakian"},
        {14, "Chilean"},
        {44, "Jordanian"},
        {74, "Slovenian"},
        {15, "Chinese"},
        {45, "Kuwaiti"},
        {75, "South Korean"},
        {16, "Colombian"},
        {46, "Latvian"},
        {76, "South African"},
        {17, "Costa Rican"},
        {47, "Lebanese"},
        {77, "Spanish"},
        {18, "Croatian"},
        {48, "Lithuanian"},
        {78, "Swedish"},
        {19, "Cypriot"},
        {49, "Luxembourger"},
        {79, "Swiss"},
        {20, "Czech"},
        {50, "Malaysian"},
        {80, "Thai"},
        {21, "Danish"},
        {51, "Maltese"},
        {81, "Turkish"},
        {22, "Dutch"},
        {52, "Mexican"},
        {82, "Uruguayan"},
        {23, "Ecuadorian"},
        {53, "Monegasque"},
        {83, "Ukrainian"},
        {24, "English"},
        {54, "New Zealander"},
        {84, "Venezuelan"},
        {25, "Emirian"},
        {55, "Nicaraguan"},
        {85, "Barbadian"},
        {26, "Estonian"},
        {56, "Northern Irish"},
        {86, "Welsh"},
        {27, "Finnish"},
        {57, "Norwegian"},
        {87, "Vietnamese"},
        {28, "French"},
        {58, "Omani	"},
        {29, "German"},
        {59, "Pakistani"},
        {30, "Ghanaian"},
        {60, "Panamanian"}
    };
};
