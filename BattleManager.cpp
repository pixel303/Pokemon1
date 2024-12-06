#include "BattleManager.hpp"
#include "Player.hpp"
#include <iostream>
using namespace std;

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) {
    cout << "A wild " << wildPokemon.name << " appeared!\n";
    battle(player, wildPokemon); // Pass the Player object to battle()
}

void BattleManager::battle(Player& player, Pokemon& wildPokemon) { // Match signature
    Pokemon& playerPokemon = player.chosenPokemon; // Access the player's chosen Pokemon

    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
        // Player's Pokémon attacks first
        playerPokemon.attack(wildPokemon);
        if (wildPokemon.isFainted()) {
            cout << "The wild " << wildPokemon.name << " fainted!\n";
            handleBattleOutcome(player, true); // Pass the Player object
            return;
        }

        // Wild Pokémon attacks back
        wildPokemon.attack(playerPokemon);
        if (playerPokemon.isFainted()) {
            cout << playerPokemon.name << " fainted!\n";
            handleBattleOutcome(player, false); // Pass the Player object
            return;
        }
    }
}

void BattleManager::handleBattleOutcome(Player& player, bool playerWon) {
    if (playerWon) {
        cout << "Congratulations, " << player.name << "! You won the battle!\n";
    }
    else {
        cout << "Oh no, " << player.name << "! You lost the battle. Better luck next time!\n";
    }
}