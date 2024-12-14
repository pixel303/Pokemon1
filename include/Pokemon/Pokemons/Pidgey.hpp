#pragma once

#include "../Pokemon.hpp"  

namespace N_Pokemon {
    class Pidgey : public Pokemon {
    private:
        int wingAttackDamage;  // Unique attack power for Pidgey's Wing Attack

    public:
        // Constructor declaration
        Pidgey(std::string name, PokemonType type, int health, int attackPower, int wingAttackDamage);

        // Method to perform Wing Attack
        void wingAttack(Pokemon& target);

        void attack(Pokemon& target) override;

        // Implementing the clone method
        std::unique_ptr<Pokemon> clone() const override {
            return std::make_unique<Pidgey>(*this);
        }

    };
} 