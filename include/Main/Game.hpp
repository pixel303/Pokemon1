#ifndef GAME_HPP
#define GAME_HPP

#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/Pokemon.hpp"

namespace N_Main {
    class Game {
    private:
        N_Pokemon::Grass forestGrass;
        N_Pokemon::Pokemon* wildPokemon;

    public:
        Game();
        ~Game();
        void gameLoop(N_Player::Player& player);
    };
}

#endif // GAME_HPP