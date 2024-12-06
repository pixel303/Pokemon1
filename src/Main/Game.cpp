#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include <iostream>
using namespace std;

Game::Game() {
    forestGrass = { "Forest",
                   {Pokemon("Pidgey", PokemonType::NORMAL, 40, 10),
                    Pokemon("Caterpie", PokemonType::BUG, 35, 12),
                    Pokemon("Zubat", PokemonType::POISON, 30, 15)},
                   70 };
}

void Game::gameLoop(Player& player) {
    int choice;
    bool keepPlaying = true;

    while (keepPlaying) {
        Utility::clearConsole();

        cout << "\nWhat would you like to do next, " << player.name << "?\n";
        cout << "1. Battle Wild Pok�mon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pok�mon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        Utility::clearInputBuffer();

        switch (choice) {
        case 1: {
            WildEncounterManager encounterManager;
            Pokemon encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
            BattleManager battleManager;
            battleManager.startBattle(player, encounteredPokemon);
            break;
        }
        case 2: {
            cout << "You head to the PokeCenter. Nurse Joy welcomes you and heals your Pok�mon.\n";
            player.chosenPokemon.heal();
            break;
        }
        case 3: {
            cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
            break;
        }
        case 4: {
            cout << "You boldly step towards the Pok�mon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
            break;
        }
        case 5: {
            cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pok�mon training!'\n";
            cout << "Are you sure you want to quit? (y/n): ";
            char quitChoice;
            cin >> quitChoice;
            if (quitChoice == 'y' || quitChoice == 'Y') {
                keepPlaying = false;
            }
            break;
        }
        default: {
            cout << "That's not a valid choice. Try again!\n";
            break;
        }
        }

        Utility::waitForEnter();
    }

    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}