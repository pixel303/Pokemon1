#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include <iostream>

namespace N_Pokemon {
    // Constructor implementation
    Squirtle::Squirtle(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_waterGunDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), waterGunDamage(p_waterGunDamage) {}

    // Water Gun method implementation
    void Squirtle::waterGun(Pokemon& target) {
        std::cout << name << " uses Water Gun! It deals " << waterGunDamage << " damage.\n";
        target.takeDamage(waterGunDamage);
    }
} 