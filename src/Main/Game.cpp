#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../include/Pokemon/Pokemons/Zubat.hpp"
#include <iostream>

using namespace std;
using namespace N_Main;
using namespace N_Player;
using namespace N_Pokemon;
using namespace N_Utility;
using namespace N_Battle;

namespace N_Main {
    Game::Game() : wildPokemon(nullptr) {
        BattleManager* battleManager = new BattleManager();
        forestGrass = { "Forest",
                {new Pidgey(battleManager),
                 new Caterpie(),
                 new Zubat() },
                70 };
    }

    Game::~Game() {
        delete wildPokemon;  // Ensure proper deletion of the wildPokemon pointer
    }

    void Game::gameLoop(Player& player) {
        int choice;
        bool keepPlaying = true;

        while (keepPlaying) {
            Utility::clearConsole();

            cout << "\nWhat would you like to do next, " << player.name << "?\n";
            cout << "1. Battle Wild Pokemon\n";
            cout << "2. Visit PokeCenter\n";
            cout << "3. Challenge Gyms\n";
            cout << "4. Enter Pokemon League\n";
            cout << "5. Quit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            Utility::clearInputBuffer();

            switch (choice) {
            case 1: {
                WildEncounterManager encounterManager;
                wildPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
                BattleManager battleManager;
                battleManager.startBattle(player, *wildPokemon);
                break;
            }
            case 2: {
                cout << "You head to the PokeCenter. Nurse Joy welcomes you and heals your Pokemon.\n";
                player.chosenPokemon->heal();
                break;
            }
            case 3: {
                cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
                break;
            }
            case 4: {
                cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
                break;
            }
            case 5: {
                cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\n";
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
}