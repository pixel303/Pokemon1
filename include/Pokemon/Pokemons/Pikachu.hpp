#pragma once

#include "../Pokemon.hpp" 

namespace N_Pokemon {
    class Pikachu : public Pokemon {
    private:
        int thunderShockDamage;  // Unique attack power for Pikachu's ThunderShock attack
        void thunderShock(Pokemon& target);  // Unique attack power for Pikachu's ThunderShock attack

    public:
        // Constructor declaration
        Pikachu(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_thunderShockDamage);
    };
} 