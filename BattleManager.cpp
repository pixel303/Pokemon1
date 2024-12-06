#include "BattleManager.hpp"
#include "Utility.hpp"
#include <iostream>
using namespace std;

BattleManager::BattleManager() : battleState(nullptr, nullptr) {
    // Initialize battleState with null pointers or default values
}

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) {
    battleState = BattleState(&player.chosenPokemon, &wildPokemon); // Initialize BattleState
    cout << "A wild " << wildPokemon.name << " appeared!\n";
    battle();
}

void BattleManager::battle() {
    while (battleState.isBattleOngoing) {
        if (battleState.isPlayerTurn) {
            // Player's turn to attack
            battleState.playerPokemon->attack(*battleState.wildPokemon);
        }
        else {
            // Wild Pok�mon's turn to attack
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
        cout << battleState.playerPokemon->name << " has fainted! You lose the battle. Visit the Pok�Center to heal.\n";
    }
    else {
        cout << "You defeated the wild " << battleState.wildPokemon->name << "! Congratulations!\n";
    }
}

void BattleManager::updateBattleState() {
    if (battleState.playerPokemon->isFainted() || battleState.wildPokemon->isFainted()) {
        battleState.isBattleOngoing = false;
    }
}