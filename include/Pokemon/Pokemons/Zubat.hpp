#pragma once

#include "../Pokemon.hpp" 

namespace N_Pokemon {
    class Zubat : public Pokemon {
    private:
        int supersonicDamage;  // Unique attack power for Zubat's Supersonic attack

    public:
        // Constructor declaration
        Zubat(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_supersonicDamage);

        // Method to perform Supersonic
        void supersonic(Pokemon& target);
    };
} 