#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
#include <iostream>
using namespace std;

Player::Player() : name("Trainer"), chosenPokemon() {}

Player::Player(string p_name, Pokemon p_chosenPokemon)
    : name(p_name), chosenPokemon(p_chosenPokemon) {}

void Player::choosePokemon(int choice) {
    switch (static_cast<PokemonChoice>(choice)) {
    case PokemonChoice::CHARMANDER:
        chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
        break;
    case PokemonChoice::BULBASAUR:
        chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
        break;
    case PokemonChoice::SQUIRTLE:
        chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
        break;
    default:
        chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
        break;
    }
    cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
    Utility::waitForEnter();
}