#ifndef BATTLE_STATE_HPP
#define BATTLE_STATE_HPP

#include "../../include/Pokemon/Pokemon.hpp"


namespace N_Battle {
    struct BattleState {
        N_Pokemon::Pokemon* playerPokemon;  // Pointer to the player's Pokémon
        N_Pokemon::Pokemon* wildPokemon;    // Pointer to the wild Pokémon
        bool isPlayerTurn;       // Boolean to track whose turn it is
        bool isBattleOngoing;    // Boolean to track if the battle is ongoing

        // Constructor to initialize the battle state
        BattleState(N_Pokemon::Pokemon* pPlayerPokemon, N_Pokemon::Pokemon* pWildPokemon)
            : playerPokemon(pPlayerPokemon), wildPokemon(pWildPokemon), isPlayerTurn(true), isBattleOngoing(true) {}
    };
}

#endif // BATTLE_STATE_HPP