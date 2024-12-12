#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include <iostream>

namespace N_Pokemon {
    // Constructor implementation
    Zubat::Zubat(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_supersonicDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), supersonicDamage(p_supersonicDamage) {}

    // Supersonic method implementation
    void Zubat::supersonic(Pokemon& target) {
        std::cout << name << " uses Supersonic! It deals " << supersonicDamage << " damage.\n";
        target.takeDamage(supersonicDamage);
    }

    void Zubat::attack(Pokemon& target) {
        supersonic(target);
    }
} 