#pragma once

#include "../Pokemon.hpp"  

namespace N_Pokemon {
    class Pidgey : public Pokemon {
    private:
        int wingAttackDamage;  // Unique attack power for Pidgey's Wing Attack

    public:
        // Constructor declaration
        Pidgey(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_wingAttackDamage);

        // Method to perform Wing Attack
        void wingAttack(Pokemon& target);

        void attack(Pokemon* target) override;

    };
} 