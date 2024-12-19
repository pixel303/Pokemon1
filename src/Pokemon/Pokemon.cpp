#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
using namespace std;

namespace N_Pokemon {
    // Default constructor
    Pokemon::Pokemon() : name("Unknown"), type(PokemonType::NORMAL), health(50), maxHealth(50), attackPower(10) {}

    // Parameterized constructor
    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower)
        : name(p_name), type(p_type), health(p_health), maxHealth(p_health), attackPower(p_attackPower) {}

    // Copy constructor
    Pokemon::Pokemon(const Pokemon& other)
        : name(other.name), type(other.type), health(other.health), maxHealth(other.maxHealth), attackPower(other.attackPower) {}

    // Destructor
    Pokemon::~Pokemon() {}

    void Pokemon::takeDamage(int damage) {
        health -= damage;
        if (health < 0) {
            health = 0; // Ensure health doesn't go below zero
        }
        //cout << name << " took " << damage << " damage and now has " << health << " HP left.\n";
    }

    bool Pokemon::isFainted() const {
        return health <= 0;
    }

    void Pokemon::heal() {
        health = maxHealth; // Restore health to full
        cout << name << " has been fully healed and now has " << health << " HP.\n";
    }

    void Pokemon::selectAndUseMove(Pokemon* target) {
        printAvailableMoves();
        int choice = selectMove();
        Move selectedMove = moves[choice - 1];
        useMove(selectedMove, target);
    }

    void Pokemon::printAvailableMoves() {
        cout << name << "'s available moves:\n";
        for (size_t i = 0; i < moves.size(); ++i) {
            cout << i + 1 << ": " << moves[i].name << " (Power: " << moves[i].power << ")\n";
        }
    }

    int Pokemon::selectMove() {
        int choice;
        cout << "Choose a move: ";
        cin >> choice;
        while (choice < 1 || choice > static_cast<int>(moves.size())) {
            cout << "Invalid choice. Try again: ";
            cin >> choice;
        }
        return choice;
    }

    void Pokemon::useMove(Move selectedMove, Pokemon* target) {
        cout << name << " used " << selectedMove.name << "!\n";
        
        attack(selectedMove, target);  // Assuming attack method is modified to handle Move object
        
        N_Utility::Utility::waitForEnter();
        cout << "...\n"; 
        N_Utility::Utility::waitForEnter();
        
        if (target->isFainted())
            cout << target->name << " fainted!\n";
        else
            cout << target->name << " has " << target->health << " HP left.\n";
    }

    void Pokemon::attack(Move move, Pokemon* target) {
        // Example implementation, assuming damage is directly related to move power
        target->takeDamage(move.power);
    }

    void Pokemon::reduceAttackPower(int amount) {
        attackPower -= amount;
        if (attackPower < 0) attackPower = 0;  // Ensure attack power does not go negative
        std::cout << name << "'s attack power reduced to " << attackPower << std::endl;
    }

    Move Pokemon::getDefaultMove() {
        if (!moves.empty()) {
            return moves[0];  // Return the first move as the default move
        }
        return Move("Default Move", 0);  // Return a default move if no moves are defined
    }
}