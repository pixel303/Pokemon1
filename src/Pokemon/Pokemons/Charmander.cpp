#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include <iostream>

namespace N_Pokemon {
    Charmander::Charmander(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_blazeDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), blazeDamage(p_blazeDamage) {}

    void Charmander::attack(Pokemon& target) {
        blaze(target);
    }

    void Charmander::blaze(Pokemon& target) {
        std::cout << name << " uses Blaze! It deals " << blazeDamage << " damage.\n";
        target.takeDamage(blazeDamage);
    }
} 