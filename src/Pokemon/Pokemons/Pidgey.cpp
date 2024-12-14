#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include <iostream>

namespace N_Pokemon {
    // Constructor implementation
    Pidgey::Pidgey(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_wingAttackDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), wingAttackDamage(p_wingAttackDamage) {}

    // Wing Attack method implementation
    void Pidgey::wingAttack(Pokemon& target) {
        std::cout << name << " uses Wing Attack! It deals " << wingAttackDamage << " damage.\n";
        target.takeDamage(wingAttackDamage);
    }

    void Pidgey::attack(Pokemon& target) {
        wingAttack(target);
    }
}