#ifndef GAME_HPP
#define GAME_HPP

#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Character/Player/Player.hpp"

namespace N_Main {
    class Game {
    private:
        N_Pokemon::Grass forestGrass;

    public:
        Game();
        void gameLoop(N_Player::Player& player);
        void battle(N_Pokemon::Pokemon& playerPokemon, N_Pokemon::Pokemon& wildPokemon);
    };
}

#endif // GAME_HPP