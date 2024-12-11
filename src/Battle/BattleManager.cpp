#include "../../include/Battle/BattleManager.hpp"
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
        battleState = BattleState(&player.chosenPokemon, &wildPokemon); // Initialize BattleState
        cout << "A wild " << wildPokemon.getName() << " appeared!\n";
        battle();
    }

    void BattleManager::battle() {
        while (battleState.isBattleOngoing) {
            if (battleState.isPlayerTurn) {
                // Player's turn to attack
                battleState.playerPokemon->attack(*battleState.wildPokemon);
            }
            else {
                // Wild Pokémon's turn to attack
                battleState.wildPokemon->attack(*battleState.playerPokemon);
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
}