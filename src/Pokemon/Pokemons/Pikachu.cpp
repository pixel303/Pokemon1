#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include <iostream>
#include"Utility/Utility.hpp"

using namespace N_Utility;
using namespace std;

namespace N_Pokemon {
    // Constructor implementation
    Pikachu::Pikachu(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_thunderShockDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), thunderShockDamage(p_thunderShockDamage) {}

    // Private method implementation
    void Pikachu::thunderShock(Pokemon& target) {
        //std::cout << name << " uses ThunderShock! It deals " << thunderShockDamage << " damage.\n";
        target.takeDamage(thunderShockDamage);
    }

    // Public method that uses the private thunderShock method
    void Pikachu::attack(Pokemon& target) {
        thunderShock(target);
        cout << "Pikachu used THUNDERSHOCK!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "*Zap* A bolt of electricity strikes the opponent!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "Sparks fly as the attack connects!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "Opponent's remaining health: " << target.getHealth() << endl;
        
    }
}