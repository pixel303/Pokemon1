#ifndef BATTLE_MANAGER_HPP
#define BATTLE_MANAGER_HPP

#include "Player.hpp"
#include "Pokemon.hpp"

class BattleManager {
public:
    void startBattle(Player& player, Pokemon& wildPokemon);
    void battle(Player& player, Pokemon& wildPokemon); // Change to accept Player&
    void handleBattleOutcome(Player& player, bool playerWon);
};

#endif // BATTLE_MANAGER_HPP