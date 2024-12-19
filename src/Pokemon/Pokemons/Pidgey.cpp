#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include <iostream>
#include "Utility/Utility.hpp"

using namespace N_Utility;
using namespace std;

namespace N_Pokemon {
    // Constructor implementation
    Pidgey::Pidgey(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_wingAttackDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), wingAttackDamage(p_wingAttackDamage) {}

    // Wing Attack method implementation
    void Pidgey::wingAttack(Pokemon& target) {
        //std::cout << name << " uses Wing Attack! N_Utility::Utility::waitForEnter(); It deals " << wingAttackDamage << " damage.\n";
        target.takeDamage(wingAttackDamage);
    }

    void Pidgey::attack(Pokemon& target) {
        wingAttack(target);
        cout << "Pidgey used WING ATTACK!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "*Flap Flap* The air whips as Pidgey flaps at high speed!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "The gust hits with a forceful impact!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "Opponent's remaining health: " << target.getHealth() << endl;
    }
}