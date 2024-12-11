#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

using namespace N_Pokemon;
using namespace std;
using namespace N_Utility;

namespace N_Player {
    Player::Player() : name("Trainer"), chosenPokemon() {}

    Player::Player(string p_name,Pokemon p_chosenPokemon)
        : name(p_name), chosenPokemon(p_chosenPokemon) {}

    void Player::choosePokemon(int choice) {
        switch (static_cast<PokemonChoice>(choice)) {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = Pokemon("Charmander",PokemonType::FIRE, 100, 15);
            break;
        case PokemonChoice::BULBASAUR:
            chosenPokemon = Pokemon("Bulbasaur",PokemonType::GRASS, 100, 12);
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = Pokemon("Squirtle",PokemonType::WATER, 100, 18);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu",PokemonType::ELECTRIC, 100, 20);
            break;
        }
        cout << "Player " << name << " chose " << chosenPokemon.getName() << "!\n";
        Utility::waitForEnter();
    }
}