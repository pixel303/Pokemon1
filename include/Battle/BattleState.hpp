#ifndef BATTLE_STATE_HPP
#define BATTLE_STATE_HPP

#include "../../include/Pokemon/Pokemon.hpp"


namespace N_Battle {
    struct BattleState {
        N_Pokemon::Pokemon* playerPokemon;
        N_Pokemon::Pokemon* wildPokemon;
        bool isPlayerTurn;
        bool isBattleOngoing;

        BattleState(N_Pokemon::Pokemon* pPlayerPokemon, N_Pokemon::Pokemon* pWildPokemon)
            : playerPokemon(pPlayerPokemon), wildPokemon(pWildPokemon), isPlayerTurn(true), isBattleOngoing(true) {}
    };
}

#endif // BATTLE_STATE_HPP