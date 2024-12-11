#ifndef GRASS_HPP
#define GRASS_HPP

#include "Pokemon.hpp"  
#include <vector>
#include <string>

namespace N_Pokemon {
    struct Grass {
        std::string environmentType;
        std::vector<Pokemon> wildPokemonList;
        int encounterRate;
    };
}

#endif // GRASS_HPP