#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "../../Pokemon/Pokemon.hpp"  
#include <string>
using namespace std;

namespace N_Player {
    class Player {
    public:
        string name;
        N_Pokemon::Pokemon chosenPokemon;

        Player();
        Player(string p_name, N_Pokemon::Pokemon p_chosenPokemon);

        void choosePokemon(int choice);
    };
}

#endif // PLAYER_HPP