#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>
#include "../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon {
    class Pokemon {
    public:
        std::string name;
        PokemonType type;
        int health;
        int maxHealth; // Maximum health points
        int attackPower; // New attribute for attack strength

        Pokemon();
        Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attackPower);
        Pokemon(const Pokemon& other);
        ~Pokemon();

        void attack(Pokemon& target); // Updated to take a target Pokemon
        void takeDamage(int damage); // Method to subtract health points
        bool isFainted() const; // Method to check if Pokémon is fainted
        void heal(); // Method to restore health to maxHealth
    };
}

#endif // POKEMON_HPP