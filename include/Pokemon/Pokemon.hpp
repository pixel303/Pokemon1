#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>
#include "../../include/Pokemon/PokemonType.hpp"
#include <memory>  
#include <vector>  // Include for using std::vector
#include "Move.hpp"  // Include to use the Move struct

namespace N_Pokemon {
    class Pokemon {
    protected:
        std::string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;
        std::vector<Move> moves; // Store the list of moves

    public:
        Pokemon();
        Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attackPower);
        Pokemon(const Pokemon& other);
        virtual ~Pokemon();

        std::string getName() const { return name; }
        PokemonType getType() const { return type; }
        int getHealth() const { return health; }
        int getMaxHealth() const { return maxHealth; }
        int getAttackPower() const { return attackPower; }

        void setName(const std::string& p_name) { name = p_name; }
        void setType(PokemonType p_type) { type = p_type; }
        void setHealth(int p_health) { health = p_health; }
        void setMaxHealth(int p_maxHealth) { maxHealth = p_maxHealth; }
        void setAttackPower(int p_attackPower) { attackPower = p_attackPower; }

        virtual void attack(Move selectedMove, Pokemon* target);
        virtual std::unique_ptr<Pokemon> clone() const = 0;  

        void takeDamage(int damage);
        bool isFainted() const;
        void heal();

        // Base implementation for selecting and using a move
        virtual void selectAndUseMove(Pokemon* target);

        // Methods for handling moves
        void printAvailableMoves();
        int selectMove();
        void useMove(Move selectedMove, Pokemon* target);

        void reduceAttackPower(int amount);  // Add this method

        Move getDefaultMove();  // Add this method to get the default move
    };
}

#endif // POKEMON_HPP