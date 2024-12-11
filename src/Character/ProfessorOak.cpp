#include "../../include/Character/ProfessorOak.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
using namespace std;
using namespace N_Utility;
using namespace N_Character;
namespace N_Character {
    ProfessorOak::ProfessorOak(string p_name) : name(p_name) {}

    void ProfessorOak::greetPlayer(N_Player::Player& player) {

        cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
        Utility::waitForEnter();
        cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
        Utility::waitForEnter();
        cout << name << ": But enough about me. Let's talk about you!\n";
        Utility::waitForEnter();
    }

    void ProfessorOak::offerPokemonChoices(N_Player::Player& player) {

        cout << name << ": First, tell me, whats your name? \t [Please Enter Your Name]\n";
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        Utility::waitForEnter();
        cout << name << ": You must be eager to start your adventure. But first, "
            "youll need a Pokemon of your own!\n";
        Utility::waitForEnter();

        // Presenting Pokemon choices
        cout << name
            << ": I have three Pokemon here with me. Theyre all quite feisty!\n";
        Utility::waitForEnter();
        cout << name << ": Choose wisely...\n";
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << name
            << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;

        player.choosePokemon(choice);
        Utility::waitForEnter();
    }

    void ProfessorOak::explainMainQuest(N_Player::Player& player) {

        // Clear the console
        Utility::clearConsole();

        cout << "Professor Oak: " << player.name
            << "!, I am about to explain you about your upcoming grand "
            "adventure.\n";
        Utility::waitForEnter();
        cout << "Professor Oak: You see, becoming a Pokmon Master is no easy "
            "feat. It takes courage, wisdom, and a bit of luck!\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Your mission, should you choose to accept itand "
            "trust me, you really dont have a choiceis to collect all the "
            "Pokmon Badges and conquer the Pokmon League.\n";
        Utility::waitForEnter();

        cout << "\n"
            << player.name
            << ": Wait... that sounds a lot like every other Pokmon game "
            "out there...\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name
            << "! This is serious business!\n";
        Utility::waitForEnter();

        cout << "\nProfessor Oak: To achieve this, youll need to battle wild "
            "Pokmon, challenge gym leaders, and of course, keep your "
            "Pokmon healthy at the PokeCenter.\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Along the way, you'll capture new Pokmon to "
            "strengthen your team. Just remembertheres a limit to how "
            "many Pokmon you can carry, so choose wisely!\n";
        Utility::waitForEnter();

        cout << "\n" << player.name << ": Sounds like a walk in the park... right?\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Hah! Thats what they all say! But beware, "
            "young Trainer, the path to victory is fraught with "
            "challenges. And if you lose a battle... well, lets just say "
            "you'll be starting from square one.\n";
        Utility::waitForEnter();

        cout << "\nProfessor Oak: So, what do you say? Are you ready to "
            "become the next Pokmon Champion?\n";
        Utility::waitForEnter();
        cout << "\n" << player.name << ": Ready as Ill ever be, Professor!\n";
        Utility::waitForEnter();

        cout << "\nProfessor Oak: Thats the spirit! Now, your journey begins...\n";
        Utility::waitForEnter();
        cout << "Professor Oak: But first... let's just pretend I didn't "
            "forget to set up the actual game loop... Ahem, onwards!\n";
        Utility::waitForEnter();
    }
}