#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include <iostream>
using namespace std;

// Default constructor
Pokemon::Pokemon() : name("Unknown"), type(PokemonType::NORMAL), health(50), maxHealth(50) {}

// Parameterized constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health) : name(p_name), type(p_type), health(p_health), maxHealth(p_health) {}

// Copy constructor
Pokemon::Pokemon(const Pokemon& other) : name(other.name), type(other.type), health(other.health), maxHealth(other.maxHealth) {}

// Destructor
Pokemon::~Pokemon() {}

void Pokemon::attack(Pokemon& target) {
    int damage = 10; // Fixed damage value
    cout << name << " attacks " << target.name << " for " << damage << " damage!\n";
    target.takeDamage(damage);
}

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