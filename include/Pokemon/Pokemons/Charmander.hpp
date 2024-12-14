#pragma once

#include "../Pokemon.hpp"

namespace N_Pokemon {
    class Charmander : public Pokemon {
    private:
        int blazeDamage;

    public:
        Charmander(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_blazeDamage);
        void attack(Pokemon& target) override;
        void blaze(Pokemon& target);  // Declaration only

        // Implementing the clone method
        std::unique_ptr<Pokemon> clone() const override {
            return std::make_unique<Charmander>(*this);
        }
    };
}