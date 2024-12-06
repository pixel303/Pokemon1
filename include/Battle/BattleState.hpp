#ifndef BATTLE_STATE_HPP
#define BATTLE_STATE_HPP

#include "../../include/Pokemon/Pokemon.hpp"

struct BattleState {
    Pokemon* playerPokemon;  // Pointer to the player's Pok�mon
    Pokemon* wildPokemon;    // Pointer to the wild Pok�mon
    bool isPlayerTurn;       // Boolean to track whose turn it is
    bool isBattleOngoing;    // Boolean to track if the battle is ongoing

    // Constructor to initialize the battle state
    BattleState(Pokemon* pPlayerPokemon, Pokemon* pWildPokemon)
        : playerPokemon(pPlayerPokemon), wildPokemon(pWildPokemon), isPlayerTurn(true), isBattleOngoing(true) {}
};

#endif // BATTLE_STATE_HPP