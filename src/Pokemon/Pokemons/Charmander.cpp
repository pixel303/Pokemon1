#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include <iostream>
#include "Utility/Utility.hpp"

using namespace N_Utility;
using namespace std;

namespace N_Pokemon {
    Charmander::Charmander()
    : Pokemon("Charmander", PokemonType::FIRE, 100, 15) {
        moves.push_back(Move("BLAZING CHARGE", 70));
        moves.push_back(Move("TACKLE", 10));
    }

    void Charmander::attack(Move selectedMove, Pokemon* target) {
        Pokemon::attack(selectedMove, target);  // Call base class attack for the first hit

        if (selectedMove.name == "BLAZING CHARGE") {
            // Recoil effect: Charmander takes recoil damage
            this->takeDamage(10); // Fixed recoil damage
            cout << getName() << " takes 10 recoil damage from the Blazing Charge!\n";
            N_Utility::Utility::waitForEnter();
        }
    }
} 