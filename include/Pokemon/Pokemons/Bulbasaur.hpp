#pragma once

#include "../Pokemon.hpp"
#include "../Move.hpp"
#include <cstdlib>  // Include for using rand()

namespace N_Pokemon {
    class Bulbasaur : public Pokemon {
    public:
        Bulbasaur();
        void attack(Move selectedMove, Pokemon* target) override;  // Ensure method signature is correct
        std::unique_ptr<Pokemon> clone() const override {
            return std::make_unique<Bulbasaur>(*this);
        }
    };
}