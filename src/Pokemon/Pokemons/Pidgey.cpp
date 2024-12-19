#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include"Battle/BattleManager.hpp"
#include"Utility/Utility.hpp"
#include <iostream>
#include <cstdlib>  // Include for rand()

using namespace std;
using namespace N_Pokemon;
using namespace N_Battle;

namespace N_Pokemon {
    Pidgey::Pidgey(N_Battle::BattleManager* manager)
    : Pokemon("Pidgey", PokemonType::NORMAL, 40, 10), battleManager(manager) {
        moves.push_back(Move("GUST", 15));
        moves.push_back(Move("TACKLE", 10));
    }

    void Pidgey::attack(Move selectedMove, Pokemon* target) {
        Pokemon::attack(selectedMove, target);  // Call base class attack for the first hit

        if (selectedMove.name == "GUST") {
            // 20% chance to blow the opponent away
            if (rand() % 100 < 20) { 
                cout << "Pidgey's GUST... and blew the opponent away!\n";
                N_Battle::BattleManager::getInstance().stopBattle();
                N_Utility::Utility::waitForEnter();
            }
        }
    }
}