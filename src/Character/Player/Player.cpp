#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Utility/Utility.hpp"
#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include <iostream>

using namespace N_Pokemon;
using namespace std;
using namespace N_Utility;

namespace N_Player {
    Player::Player() : name("Trainer") {}

    Player::Player(std::string p_name, N_Pokemon::Pokemon& p_pokemon) : name(p_name) {
        chosenPokemon = p_pokemon.clone();
    }

    void Player::choosePokemon(int choice) {
        switch (static_cast<PokemonChoice>(choice)) {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = make_unique<Charmander>("Charmander", PokemonType::FIRE, 100, 15, 17);
            break;
        case PokemonChoice::BULBASAUR:
            chosenPokemon = make_unique<Bulbasaur>("Bulbasaur", PokemonType::GRASS, 100, 12, 15);
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = make_unique<Squirtle>("Squirtle", PokemonType::WATER, 100, 18, 20);
            break;
        default:
            chosenPokemon = make_unique<Pikachu>("Pikachu", PokemonType::ELECTRIC, 100, 17, 20);
            break;
        }
        cout << "Player " << name << " chose " << chosenPokemon->getName() << "!\n";
        Utility::waitForEnter();
    }
}
