#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
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
        cout << name << " took " << damage << " damage and now has " << health << " HP left.\n";
    }

    bool Pokemon::isFainted() const {
        return health <= 0;
    }

    void Pokemon::heal() {
        health = maxHealth; // Restore health to full
        cout << name << " has been fully healed and now has " << health << " HP.\n";
    }
}