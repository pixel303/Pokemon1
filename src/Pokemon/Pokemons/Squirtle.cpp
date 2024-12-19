#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include <iostream>
#include <cstdlib>  // Include for rand()

using namespace std;

namespace N_Pokemon {
    Squirtle::Squirtle()
    : Pokemon("Squirtle", PokemonType::WATER, 100, 15) {
        moves.push_back(Move("RAPID SPIN", 5));
        moves.push_back(Move("TACKLE", 10));
    }

    void Squirtle::attack(Move selectedMove, Pokemon* target) {
        Pokemon::attack(selectedMove, target);

        if (selectedMove.name == "RAPID SPIN") {
            // Random number of hits between 2 and 5
            int hits = (rand() % 4) + 2;

            // Split damage across hits
            for (int i = 0; i < hits; ++i) {
                Pokemon::attack(selectedMove, target);
            }

            cout << "... and hit " << hits << " times!\n";
        }
    }
} 