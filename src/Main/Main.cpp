#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Character/ProfessorOak.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
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
    // Create Pokemon and Player objects for the game
    N_Pokemon:: Pokemon charmander("Charmander", PokemonType::FIRE, 100, 15); // Using parameterized constructor

    // Continue with the main flow of the game
    ProfessorOak professor("Professor Oak");
    N_Player::Player player("Ash", charmander);

    // Greet the player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Explain the main quest
    professor.explainMainQuest(player);

    // Start the main game loop
    Game game;
    game.gameLoop(player);

    return 0;
}