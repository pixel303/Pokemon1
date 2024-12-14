#pragma once

#include "../Pokemon.hpp" 

namespace N_Pokemon {
    class Zubat : public Pokemon {
    private:
        int supersonicDamage;  // Unique attack power for Zubat's Supersonic attack

    public:
        // Constructor declaration
        Zubat(std::string name, PokemonType type, int health, int attackPower, int supersonicDamage);

        // Method to perform Supersonic
        void supersonic(Pokemon& target);

        void attack(Pokemon& target) override;

        // Implementing the clone method
        std::unique_ptr<Pokemon> clone() const override {
            return std::make_unique<Zubat>(*this);
        }

    };
} 