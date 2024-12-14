#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "../../Pokemon/Pokemon.hpp"  
#include <string>
#include <memory>

namespace N_Player {
    class Player {
    public:
        std::string name;
        std::unique_ptr<N_Pokemon::Pokemon> chosenPokemon;

        Player();
        Player(std::string p_name, N_Pokemon::Pokemon& p_pokemon);

        void choosePokemon(int choice);
    };
}

#endif // PLAYER_HPP