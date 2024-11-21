#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Pokemon.hpp"
#include "Pokemon.hpp"
#include <string>
using namespace std;

class Player {
public:
    string name;
    Pokemon chosenPokemon;

    Player();
    Player(string p_name, Pokemon p_chosenPokemon);

    void choosePokemon(int choice);
};

#endif // PLAYER_HPP