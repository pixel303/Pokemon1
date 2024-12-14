#pragma once

#include "../Pokemon.hpp"  

namespace N_Pokemon {
    class Caterpie : public Pokemon {
    public:
        Caterpie(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_bugBiteDamage);
        void attack(Pokemon& target) override;
        std::unique_ptr<Pokemon> clone() const override {
            return std::make_unique<Caterpie>(*this);
        }
    private:
        int bugBiteDamage;
        void bugBite(Pokemon& target);
    };
}