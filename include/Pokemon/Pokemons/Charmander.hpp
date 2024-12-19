#pragma once

#include "../Pokemon.hpp"
#include "../Move.hpp"

namespace N_Pokemon {
    class Charmander : public Pokemon {
    public:
        Charmander();
        void attack(Move selectedMove, Pokemon* target) override;
        std::unique_ptr<Pokemon> clone() const override {
            return std::make_unique<Charmander>(*this);
        }
    };
}