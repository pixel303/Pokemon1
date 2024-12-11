#pragma once

#include "../Pokemon.hpp"  

namespace N_Pokemon {
    class Caterpie : public Pokemon {
    private:
        int bugBiteDamage;  // Unique attack power for Caterpie's Bug Bite attack

    public:
        // Constructor declaration
        Caterpie(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_bugBiteDamage);

        // Method to perform Bug Bite
        void bugBite(Pokemon& target);
    };
} 