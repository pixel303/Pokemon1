#ifndef PROFESSOR_OAK_HPP
#define PROFESSOR_OAK_HPP

#include <iostream>
#include "Player/Player.hpp"

namespace N_Character {
	class ProfessorOak {
	public:
		std::string name;

		ProfessorOak(std::string p_name);
		void greetPlayer(N_Player::Player& player);
		void offerPokemonChoices(N_Player::Player& player);
		void explainMainQuest(N_Player::Player& player);
	};
}

#endif // PROFESSOR_OAK_HPP