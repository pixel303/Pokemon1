// src/Battle/WildEncounterManager.cpp
#include "../../include/Battle/WildEncounterManager.hpp"
#include <cstdlib> 
#include <ctime>   

namespace N_Battle {
    WildEncounterManager::WildEncounterManager() {
        srand(time(0));  // Seed the random number generator
    }

    N_Pokemon::Pokemon WildEncounterManager::getRandomPokemonFromGrass(const N_Pokemon::Grass& grass) {
        int randomIndex = rand() % grass.wildPokemonList.size();
        return grass.wildPokemonList[randomIndex];
    }
}