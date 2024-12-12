#pragma once

#include "../Pokemon.hpp"  

namespace N_Pokemon {
    class Charmander : public Pokemon {
    private:
        int blazeDamage;  

    public:
        // Constructor declaration
        Charmander(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_blazeDamage);

        // Method to perform Blaze
        void blaze(Pokemon& target);

        void attack(Pokemon& target) override;

    };
} 