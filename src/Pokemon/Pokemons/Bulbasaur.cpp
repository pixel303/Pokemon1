#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include <iostream>
#include"Utility/Utility.hpp"
#include <cstdlib>  // Include for rand()

using namespace std;
using namespace N_Utility;

namespace N_Pokemon {
    Bulbasaur::Bulbasaur()
    : Pokemon("Bulbasaur", PokemonType::GRASS, 110, 15) {
        moves.push_back(Move("VINE WHIP", 25));
        moves.push_back(Move("TACKLE", 10));
    }

    void Bulbasaur::attack(Move selectedMove, Pokemon* target) {
        Pokemon::attack(selectedMove, target);  // Call base class attack for the first hit

        if (selectedMove.name == "VINE WHIP") {
            // Chance for a second hit (50% chance)
            int secondHitChance = rand() % 2;  // Generates 0 or 1
            
            if (secondHitChance == 1) {
                Pokemon::attack(selectedMove, target);  // Second hit
                cout << getName() << " hits again with a second " << selectedMove.name << "!\n";
            } else {
                cout << target->getName() << " dodged the second hit!\n";
            }
        }
    }
} 