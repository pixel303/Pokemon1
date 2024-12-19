#pragma once

#include "../Pokemon.hpp"
#include "../Move.hpp"
#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include"Battle/BattleManager.hpp"

namespace N_Pokemon {
    class Pidgey : public Pokemon {
    private:
        N_Battle::BattleManager* battleManager;

    public:
        Pidgey(N_Battle::BattleManager* manager);
        void attack(Move selectedMove, Pokemon* target) override;
        std::unique_ptr<Pokemon> clone() const override {
            return std::make_unique<Pidgey>(*this);
        }
    };
} 