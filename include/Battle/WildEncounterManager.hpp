// include/Battle/WildEncounterManager.hpp
#ifndef WILD_ENCOUNTER_MANAGER_HPP
#define WILD_ENCOUNTER_MANAGER_HPP

#include "../../include/Pokemon/Grass.hpp"  
#include "../../include/Pokemon/Pokemon.hpp"  

namespace N_Battle {
    class WildEncounterManager {
    public:
        WildEncounterManager();
        N_Pokemon::Pokemon* getRandomPokemonFromGrass(const N_Pokemon::Grass& grass);
    };
}

#endif // WILD_ENCOUNTER_MANAGER_HPP