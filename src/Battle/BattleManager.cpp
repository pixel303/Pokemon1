#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Battle/BattleState.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include <iostream>

using namespace std;
using namespace N_Utility;
using namespace N_Player;
using namespace N_Pokemon;

namespace N_Battle {
    BattleManager::BattleManager() : battleState(nullptr, nullptr) {
        // Initialize battleState with null pointers or default values
    }

    void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) {
        battleState = BattleState(player.chosenPokemon.get(), &wildPokemon); // Correctly initialize BattleState
        cout << "A wild " << wildPokemon.getName() << " appeared!\n";
        battle();
    }

    void BattleManager::battle() {
        while (battleState.isBattleOngoing) {
            if (battleState.isPlayerTurn) {
                cout << "Your turn:\n";
                if (battleState.playerPokemon->canAttack()) {
                    Move selectedMove = battleState.playerPokemon->getDefaultMove();  // Example of move selection
                    battleState.playerPokemon->selectAndUseMove(battleState.wildPokemon);
                } else {
                    cout << battleState.playerPokemon->getName() << " is paralyzed and can't move!\n";
                }
            } else {
                cout << "Wild Pokemon's turn:\n";
                if (battleState.wildPokemon->canAttack()) {
                    Move wildMove = battleState.wildPokemon->getDefaultMove();  // Example of move selection
                    battleState.wildPokemon->attack(wildMove, battleState.playerPokemon);
                } else {
                    cout << battleState.wildPokemon->getName() << " is paralyzed and can't move!\n";
                }
            }

            // Update the battle state after the turn
            updateBattleState();

            // Switch turns
            battleState.isPlayerTurn = !battleState.isPlayerTurn;

            Utility::waitForEnter();
        }

        handleBattleOutcome();
    }

    void BattleManager::handleBattleOutcome() {
        if (battleState.playerPokemon->isFainted()) {
            cout << battleState.playerPokemon->getName() << " has fainted! You lose the battle. Visit the PokéCenter to heal.\n";
        }
        else {
            cout << "You defeated the wild " << battleState.wildPokemon->getName() << "! Congratulations!\n";
        }
    }

    void BattleManager::updateBattleState() {
        if (battleState.playerPokemon->isFainted() || battleState.wildPokemon->isFainted()) {
            battleState.isBattleOngoing = false;
        }
    }

    void BattleManager::stopBattle() {
        // Implementation to stop the battle
        // For example, setting a flag or changing the state
        battleState.isBattleOngoing = false;
        std::cout << "The battle has been stopped." << std::endl;
    }
}