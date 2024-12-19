#pragma once

#include "../Pokemon.hpp"
#include "../Move.hpp"

namespace N_Pokemon {
    class Caterpie : public Pokemon {
    public:
        Caterpie();
        void attack(Move selectedMove, Pokemon* target) override;
        std::unique_ptr<Pokemon> clone() const override {
            return std::make_unique<Caterpie>(*this);
        }
    };
}