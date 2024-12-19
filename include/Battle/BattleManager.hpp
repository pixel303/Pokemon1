#ifndef BATTLE_MANAGER_HPP
#define BATTLE_MANAGER_HPP

#include "../../include/Character/Player/Player.hpp"
#include "../../include/Battle/BattleState.hpp"

namespace N_Battle {
    class BattleManager {
    public:
        static BattleManager& getInstance() {
            static BattleManager instance;
            return instance;
        }

        BattleManager();
        void startBattle(N_Player::Player& player, N_Pokemon::Pokemon& wildPokemon);
        void stopBattle();

    private:
        BattleState battleState;  // New BattleState object to track the battle

        void battle();
        void handleBattleOutcome();
        void updateBattleState(); // Method to update the battle state after each turn
    };
}

#endif // BATTLE_MANAGER_HPP