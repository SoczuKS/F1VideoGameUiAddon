#pragma once

#include "Driver.hpp"

#include <cstdint>
#include <vector>

class DriverStorage {
public:
    DriverStorage() = default;

    [[nodiscard]] const Driver& getById(const uint8_t& id) {
        return *std::find_if(drivers.begin(), drivers.end(), [id](const Driver& driver) {
            return driver.id == id;
        });
    }

private:
    const std::vector<Driver> drivers {
        {0, "Carlos", "Sainz"},          {45, "Artem", "Markelov"},
        {88, "Guiliano", "Alesi"},       {1, "Daniil", "Kvyat"},
        {46, "Tadasuke", "Makino"},      {89, "Ralph", "Boschung"},
        {2, "Daniel", "Ricciardo"},      {47, "Sean", "Gelael"},
        {90, "Michael", "Schumacher"},   {3, "Fernando", "Alonso"},
        {48, "Nyck", "De Vries"},        {91, "Dan", "Ticktum"},
        {4, "Felipe", "Massa"},          {49, "Jack", "Aitken"},
        {92, "Marcus", "Armstrong"},     {6, "Kimi", "Räikkönen"},
        {50, "George", "Russell"},       {93, "Christian", "Lundgaard"},
        {7, "Lewis", "Hamilton"},        {51, "Maximilian", "Günther"},
        {94, "Yuki", "Tsunoda"},         {9, "Max", "Verstappen"},
        {52, "Nirei", "Fukuzumi"},       {95, "Jehan", "Daruvala"},
        {10, "Nico", "Hulkenburg"},      {53, "Luca", "Ghiotto"},
        {96, "Gulherme", "Samaia"},      {11, "Kevin", "Magnussen"},
        {54, "Lando", "Norris"},         {97, "Pedro", "Piquet"},
        {12, "Romain", "Grosjean"},      {55, "Sérgio", "Sette Câmara"},
        {98, "Felipe", "Drugovich"},     {13, "Sebastian", "Vettel"},
        {56, "Louis", "Delétraz"},       {99, "Robert", "Schwartzman"},
        {14, "Sergio", "Perez"},         {57, "Antonio", "Fuoco"},
        {100, "Roy", "Nissany"},         {15, "Valtteri", "Bottas"},
        {58, "Charles", "Leclerc"},      {101, "Marino", "Sato"},
        {17, "Esteban", "Ocon"},         {59, "Pierre", "Gasly"},
        {102, "Aidan", "Jackson"},       {19, "Lance", "Stroll"},
        {62, "Alexander", "Albon"},      {103, "Casper", "Akkerman"},
        {20, "Arron", "Barnes"},         {63, "Nicholas", "Latifi"},
        {109, "Jenson", "Button"},       {21, "Martin", "Giles"},
        {64, "Dorian", "Boccolacci"},    {110, "David", "Coulthard"},
        {22, "Alex", "Murray"},          {65, "Niko", "Kari"},
        {111, "Nico", "Rosberg"},        {23, "Lucas", "Roth"},
        {66, "Roberto", "Merhi"},        {112, "Oscar", "Piastri"},
        {24, "Igor", "Correia"},         {67, "Arjun", "Maini"},
        {113, "Liam", "Lawson"},         {25, "Sophie", "Levasseur"},
        {68, "Alessio", "Lorandi"},      {114, "Juri", "Vips"},
        {26, "Jonas", "Schiffer"},       {69, "Ruben", "Meijer"},
        {115, "Theo", "Pourchaire"},     {27, "Alain", "Forest"},
        {70, "Rashid", "Nair"},          {116, "Richard", "Verschoor"},
        {28, "Jay", "Letourneau"},       {71, "Jack", "Tremblay"},
        {117, "Lirim", "Zendeli"},       {29, "Esto", "Saari"},
        {72, "Devon", "Butler"},         {118, "David", "Beckmann"},
        {30, "Yasar", "Atiyeh"},         {73, "Lukas", "Weber"},
        {121, "Alessio", "Deledda"},     {31, "Callisto", "Calabresi"},
        {74, "Antonio", "Giovinazzi"},   {122, "Bent", "Viscaal"},
        {32, "Naota", "Izum"},           {75, "Robert", "Kubica"},
        {123, "Enzo", "Fittipaldi"},     {33, "Howard", "Clarke"},
        {76, "Alain", "Prost"},          {125, "Mark", "Webber"},
        {34, "Wilheim", "Kaufmann"},     {77, "Ayrton", "Senna"},
        {126, "Jacques", "Villeneuve"},  {35, "Marie", "Laursen"},
        {78, "Nobuharu", "Matsushita"},  {36, "Flavio", "Nieves"},
        {79, "Nikita", "Mazepin"},       {37, "Peter", "Belousov"},
        {80, "Guanya", "Zhou"},          {38, "Klimek", "Michalski"},
        {81, "Mick", "Schumacher"},      {39, "Santiago", "Moreno"},
        {82, "Callum", "Ilott"},         {40, "Benjamin", "Coppens"},
        {83, "Juan", "Manuel Correa"},   {41, "Noah", "Visser"},
        {84, "Jordan", "King"},          {42, "Gert", "Waldmuller"},
        {85, "Mahaveer", "Raghunathan"}, {43, "Julian", "Quesada"},
        {86, "Tatiana", "Calderon"},     {44, "Daniel", "Jones"},
        {87, "Anthoine", "Hubert"}
    };
};
