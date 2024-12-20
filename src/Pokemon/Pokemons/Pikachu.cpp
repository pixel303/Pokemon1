#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include <iostream>

namespace N_Pokemon {
    // Constructor implementation
    Pikachu::Pikachu(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_thunderShockDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), thunderShockDamage(p_thunderShockDamage) {}

    // thunderShock method implementation
    void Pikachu::thunderShock(Pokemon& target) {
        std::cout << name << " uses ThunderShock! It deals " << thunderShockDamage << " damage.\n";
        target.takeDamage(thunderShockDamage);
    }

    void Pikachu::attack(Pokemon* target) {
        thunderShock(target);
    }
} 