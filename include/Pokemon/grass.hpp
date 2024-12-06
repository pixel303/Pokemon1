#include <string>
#include <vector>
#include "../../include/Pokemon/Pokemon.hpp"
using namespace std;

struct Grass {
    string environmentType;  
    vector<Pokemon> wildPokemonList;  
    int encounterRate;  
};