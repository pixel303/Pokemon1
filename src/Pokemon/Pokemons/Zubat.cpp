#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include <iostream>

using namespace std;

namespace N_Pokemon {
    Zubat::Zubat()
    : Pokemon("Zubat", PokemonType::POISON, 100, 15) {
        moves.push_back(Move("LEECH LIFE", 10));
        moves.push_back(Move("BITE", 20));
    }

    void Zubat::attack(Move selectedMove, Pokemon* target) {
        cout << "Zubat uses " << selectedMove.name << "!\n";  // Debugging output
        Pokemon::attack(selectedMove, target);  // Call base class attack

        if (selectedMove.name == "LEECH LIFE") {
            // Restore 50% of the damage dealt
            int healthRestored = static_cast<int>(selectedMove.power * 0.5);
            this->health += healthRestored;

            // Ensure health does not exceed maxHealth
            if (this->health > this->maxHealth) {
                this->health = this->maxHealth;
            }

            cout << "... and regained " << healthRestored << " health!\n";  // Debugging output
        }
    }
}