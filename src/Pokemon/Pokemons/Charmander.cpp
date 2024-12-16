#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include <iostream>
#include "Utility/Utility.hpp"

using namespace N_Utility;
using namespace std;

namespace N_Pokemon {
    Charmander::Charmander(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_blazeDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), blazeDamage(p_blazeDamage) {}

    void Charmander::attack(Pokemon& target) {
        blaze(target);
    }

    void Charmander::blaze(Pokemon& target) {
        target.takeDamage(blazeDamage);
        cout << "Charmander used FLAME THROWER!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "*Whoosh* A stream of fire engulfs the opponent!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "The flames dance violently around the target!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "Opponent's remaining health: " << target.getHealth() << endl;
    }
} 