#pragma once

#include "../Pokemon.hpp"

namespace N_Pokemon {
    class Pikachu : public Pokemon {
    private:
        int thunderShockDamage;
        void thunderShock(Pokemon& target);

    public:
        Pikachu(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_thunderShockDamage);

        std::unique_ptr<Pokemon> clone() const override {
            return std::make_unique<Pikachu>(*this);
        }

        void attack(Pokemon& target) override;
    };
}