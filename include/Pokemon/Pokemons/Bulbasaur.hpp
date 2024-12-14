#pragma once

#include "../Pokemon.hpp"  

namespace N_Pokemon {
    class Bulbasaur : public Pokemon {
    private:
        int vineWhipDamage;  // Unique attack power for Bulbasaur's Vine Whip attack

    public:
        // Constructor declaration
        Bulbasaur(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_vineWhipDamage);

        void vineWhip(Pokemon& target);

        void attack(Pokemon* target) override;

    };
}