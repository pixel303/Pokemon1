#include "Grass.hpp"
#include "Player.hpp"

class Game {
private:
    Grass forestGrass;

public:
    Game();
    void gameLoop(Player& player);
    void battle(Pokemon& playerPokemon, Pokemon& wildPokemon); // New method for battle
};