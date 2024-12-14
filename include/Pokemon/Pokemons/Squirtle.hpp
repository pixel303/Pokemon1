#pragma once

#include "../Pokemon.hpp" 

namespace N_Pokemon {
    class Squirtle : public Pokemon {
    private:
        int waterGunDamage;  // Unique attack power for Squirtle's Water Gun attack

    public:
        // Constructor declaration
        Squirtle(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_waterGunDamage);

        // Method to perform Water Gun
        void waterGun(Pokemon& target);

        void attack(Pokemon& target) override;

        // Implementing the clone method
        std::unique_ptr<Pokemon> clone() const override {
            return std::make_unique<Squirtle>(*this);
        }

    };
} 