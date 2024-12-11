#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>
#include "../../include/Pokemon/PokemonType.hpp"

namespace N_Pokemon {
    class Pokemon {
    protected:
        std::string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;

    public:
        Pokemon();
        Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attackPower);
        Pokemon(const Pokemon& other);
        ~Pokemon();

        // Getters
        std::string getName() const { return name; }
        PokemonType getType() const { return type; }
        int getHealth() const { return health; }
        int getMaxHealth() const { return maxHealth; }
        int getAttackPower() const { return attackPower; }

        // Setters
        void setName(const std::string& p_name) { name = p_name; }
        void setType(PokemonType p_type) { type = p_type; }
        void setHealth(int p_health) { health = p_health; }
        void setMaxHealth(int p_maxHealth) { maxHealth = p_maxHealth; }
        void setAttackPower(int p_attackPower) { attackPower = p_attackPower; }

        void attack(Pokemon& target);
        void takeDamage(int damage);
        bool isFainted() const;
        void heal();
    };
}

#endif // POKEMON_HPP