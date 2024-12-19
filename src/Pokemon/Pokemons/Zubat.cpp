#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include <iostream>
#include"Utility/Utility.hpp"

using namespace std;
using namespace N_Utility;
namespace N_Pokemon {
    // Constructor implementation
    Zubat::Zubat(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_supersonicDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), supersonicDamage(p_supersonicDamage) {}

    // Supersonic method implementation
    void Zubat::supersonic(Pokemon& target) {
       // std::cout << name << " uses Supersonic! It deals " << supersonicDamage << " damage.\n";
        target.takeDamage(supersonicDamage);
    }

    void Zubat::attack(Pokemon& target) {
        supersonic(target);
        cout << "Zubat used SUPERSONIC!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "*Screech* An ear-piercing sound resonates!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "The sound waves disorient the opponent!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "Opponent's remaining health: " << target.getHealth() << endl;
    }
}