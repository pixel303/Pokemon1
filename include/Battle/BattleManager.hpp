#ifndef BATTLE_MANAGER_HPP
#define BATTLE_MANAGER_HPP

#include "../../include/Battle/BattleState.hpp"
#include "../../include/Character/Player/Player.hpp"

class BattleManager {
public:
    BattleManager();
    void startBattle(Player& player, Pokemon& wildPokemon);

private:
    BattleState battleState;  // New BattleState object to track the battle

    void battle();
    void handleBattleOutcome();
    void updateBattleState(); // Method to update the battle state after each turn
};

#endif // BATTLE_MANAGER_HPP