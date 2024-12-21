#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include <iostream>
#include <cstdlib>  // Include for rand()

using namespace std;

namespace N_Pokemon {
    Pikachu::Pikachu()
    : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 15) {
        moves.push_back(Move("THUNDER BOLT", 80));
        moves.push_back(Move("QUICK ATTACK", 40));
    }

    void Pikachu::attack(Move selectedMove, Pokemon* target) {
        cout << "Pikachu uses " << selectedMove.name << "!\n";  // Debugging output
        if (selectedMove.name == "THUNDER BOLT") {
            // 80% chance to hit
            if (rand() % 100 < 80) { 
                Pokemon::attack(selectedMove, target);
                cout << "... and it hit successfully!\n";
            } else {
                cout << "... but it missed!\n";
            }
        } else {
            Pokemon::attack(selectedMove, target);
        }
    }
}