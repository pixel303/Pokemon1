#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Character/ProfessorOak.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
#include <limits>
#include <string>

using namespace std;
using namespace N_Utility;
using namespace N_Character;
using namespace N_Pokemon;
using namespace N_Battle;
using namespace N_Main;

int main() {
    // Create Pokemon and Player objects for the game using dynamic memory allocation
    N_Pokemon::Pokemon* charmander = new N_Pokemon::Charmander("Charmander", PokemonType::FIRE, 100, 15, 18);
    ProfessorOak* professor = new ProfessorOak("Professor Oak");
    N_Player::Player* player = new N_Player::Player("Ash", *charmander);
    Game* game = new Game();

    // Greet the player and offer Pokemon choices
    professor->greetPlayer(*player);
    professor->offerPokemonChoices(*player);

    // Explain the main quest
    professor->explainMainQuest(*player);

    // Start the main game loop
    game->gameLoop(*player);

    // Free up dynamically allocated memory
    delete charmander;
    delete professor;
    delete player;
    delete game;

    return 0;
}