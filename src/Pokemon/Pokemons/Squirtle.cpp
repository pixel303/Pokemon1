#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include <iostream>
#include"Utility/Utility.hpp"

using namespace std;
using namespace N_Utility;
namespace N_Pokemon {
    // Constructor implementation
    Squirtle::Squirtle(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_waterGunDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), waterGunDamage(p_waterGunDamage) {}

    // Water Gun method implementation
    void Squirtle::waterGun(Pokemon& target) {
        //std::cout << name << " uses Water Gun! It deals " << waterGunDamage << " damage.\n";
        target.takeDamage(waterGunDamage);
    }

    void Squirtle::attack(Pokemon& target) {
        waterGun(target);
        cout << "Squirtle used WATER GUN!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "*Splash* A powerful jet of water shoots towards the opponent!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "The attack splashes loudly as it hits!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "Opponent's remaining health: " << target.getHealth() << endl;
    }
} 