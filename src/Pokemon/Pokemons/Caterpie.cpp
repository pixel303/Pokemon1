// src/Pokemon/Pokemons/Caterpie.cpp
#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include <iostream>
#include"Utility/Utility.hpp"

using namespace N_Utility;
using namespace std;
namespace N_Pokemon {
    // Constructor implementation
    Caterpie::Caterpie(std::string p_name, PokemonType p_type, int p_health, int p_attackPower, int p_bugBiteDamage)
        : Pokemon(p_name, p_type, p_health, p_attackPower), bugBiteDamage(p_bugBiteDamage) {}

    // Bug Bite method implementation
    void Caterpie::bugBite(Pokemon& target) {
        //std::cout << name << " uses Bug Bite! It deals " << bugBiteDamage << " damage.\n";
        target.takeDamage(bugBiteDamage);
    }

    void Caterpie::attack(Pokemon& target) {
        bugBite(target);
        cout << "Caterpie used BUG BITE!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "*Crunch* Caterpie bites down hard!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "The bite is sharp and relentless!" << endl;
        N_Utility::Utility::waitForEnter();
        cout << "Opponent's remaining health: " << target.getHealth() << endl;
    }
}