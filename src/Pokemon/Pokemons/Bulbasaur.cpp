#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include <iostream>

namespace N_Pokemon {
    // Constructor implementation
    Bulbasaur::Bulbasaur(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_vineWhipDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), vineWhipDamage(p_vineWhipDamage) {}

    // Vine Whip method implementation
    void Bulbasaur::vineWhip(Pokemon& target) {
        std::cout << name << " uses Vine Whip! It deals " << vineWhipDamage << " damage.\n";
        target.takeDamage(vineWhipDamage);
    }
} 