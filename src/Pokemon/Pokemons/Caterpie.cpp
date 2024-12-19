// src/Pokemon/Pokemons/Caterpie.cpp
#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include <iostream>
#include"Utility/Utility.hpp"

using namespace N_Utility;
using namespace std;
namespace N_Pokemon {
    // Constructor implementation
    Caterpie::Caterpie()
    : Pokemon("Caterpie", PokemonType::BUG, 50, 10) {
        moves.push_back(Move("STICKY WEB", 0));  // Assuming no damage from STICKY WEB itself
        moves.push_back(Move("TACKLE", 10));
    }

    // Bug Bite method implementation
    /*void Caterpie::bugBite(Pokemon& target) {
        //std::cout << name << " uses Bug Bite! It deals " << bugBiteDamage << " damage.\n";
        target.takeDamage(bugBiteDamage);
    }*/

    void Caterpie::attack(Move selectedMove, Pokemon* target) {
        Pokemon::attack(selectedMove, target);  // Call base class attack for the first hit

        if (selectedMove.name == "STICKY WEB") {
            // Reduce the target's next attack damage (for simplicity, reducing by a fixed value)
            int reducedDamage = 5;
            target->reduceAttackPower(reducedDamage);
            cout << target->getName() << "'s next attack will be reduced by " << reducedDamage << " damage!\n";
        }
    }
}