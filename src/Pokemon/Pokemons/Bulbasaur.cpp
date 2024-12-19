#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include <iostream>
#include"Utility/Utility.hpp"

using namespace N_Utility;
using namespace std;

namespace N_Pokemon {
    // Constructor implementation
    Bulbasaur::Bulbasaur(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_vineWhipDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), vineWhipDamage(p_vineWhipDamage) {}

    // Vine Whip method implementation
    void Bulbasaur::vineWhip(Pokemon& target) {
       // std::cout << name << " uses Vine Whip! It deals " << vineWhipDamage << " damage.\n";
        target.takeDamage(vineWhipDamage);
    }

    void Bulbasaur::attack(Pokemon& target) {
        vineWhip(target);
        cout << "Bulbasaur used VINE WHIP!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "*Swoosh* Vines lash out swiftly at the opponent!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "The vines strike with a sharp snap!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "Opponent's remaining health: " << target.getHealth() << endl;
    }
} 