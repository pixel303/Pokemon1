#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include <iostream>

namespace N_Pokemon {
    // Constructor implementation
    Caterpie::Caterpie(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_bugBiteDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), bugBiteDamage(p_bugBiteDamage) {}

    // Bug Bite method implementation
    void Caterpie::bugBite(Pokemon& target) {
        std::cout << name << " uses Bug Bite! It deals " << bugBiteDamage << " damage.\n";
        target.takeDamage(bugBiteDamage);
    }
} 