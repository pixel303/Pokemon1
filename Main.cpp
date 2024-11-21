#include "Player.hpp"
//#include "Pokemon.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include <iostream>
#include <limits>
#include <string>
using namespace std;

// ProfessorOak class definition
class ProfessorOak {
public:
    string name;

    // Parameterized constructor
    ProfessorOak(string p_name) { name = p_name; }

    void greetPlayer(Player& player) {
        cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
        Utility::waitForEnter();
        cout << name
            << ": My name is Oak. People call me the Pokemon Professor!\n";
        Utility::waitForEnter();
        cout << name << ": But enough about me. Let's talk about you!\n";
        Utility::waitForEnter();
    }

    void offerPokemonChoices(Player& player) {
        cout << name;
        cout << ": First, tell me, what�s your name? \t [Please Enter Your Name]\n";
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name
            << "! What a fantastic name!\n";
        Utility::waitForEnter();
        cout << name
            << ": You must be eager to start your adventure. But first, "
            "you�ll need a Pokemon of your own!\n";
        Utility::waitForEnter();

        // Presenting Pokemon choices
        cout
            << name
            << ": I have three Pokemon here with me. They�re all quite feisty!\n";
        Utility::waitForEnter();
        cout << name << ": Choose wisely...\n";
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout
            << name
            << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;

        player.choosePokemon(choice);
        Utility::waitForEnter();
    }

    // New method for the main quest conversation
    void explainMainQuest(Player& player) {
        // Clear the console
        Utility::clearConsole();

        cout << "Professor Oak: " << player.name
            << "!, I am about to explain you about your upcoming grand "
            "adventure.\n";
        Utility::waitForEnter();
        cout << "Professor Oak: You see, becoming a Pok�mon Master is no easy "
            "feat. It takes courage, wisdom, and a bit of luck!\n";
        Utility::waitForEnter();
        cout
            << "Professor Oak: Your mission, should you choose to accept it�and "
            "trust me, you really don�t have a choice�is to collect all the "
            "Pok�mon Badges and conquer the Pok�mon League.\n";
        Utility::waitForEnter();

        cout << "\n"
            << player.name
            << ": Wait... that sounds a lot like every other Pok�mon game "
            "out there...\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Shhh! Don't break the fourth wall, "
            << player.name << "! This is serious business!\n";
        Utility::waitForEnter();

        cout << "\nProfessor Oak: To achieve this, you�ll need to battle wild "
            "Pok�mon, challenge gym leaders, and of course, keep your "
            "Pok�mon healthy at the PokeCenter.\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Along the way, you'll capture new Pok�mon to "
            "strengthen your team. Just remember�there�s a limit to how "
            "many Pok�mon you can carry, so choose wisely!\n";
        Utility::waitForEnter();

        cout << "\n"
            << player.name << ": Sounds like a walk in the park... right?\n";
        Utility::waitForEnter();
        cout << "Professor Oak: Hah! That�s what they all say! But beware, "
            "young Trainer, the path to victory is fraught with "
            "challenges. And if you lose a battle... well, let�s just say "
            "you'll be starting from square one.\n";
        Utility::waitForEnter();

        cout << "\nProfessor Oak: So, what do you say? Are you ready to "
            "become the next Pok�mon Champion?\n";
        Utility::waitForEnter();
        cout << "\n" << player.name << ": Ready as I�ll ever be, Professor!\n";
        Utility::waitForEnter();

        cout
            << "\nProfessor Oak: That�s the spirit! Now, your journey begins...\n";
        Utility::waitForEnter();
        cout << "Professor Oak: But first... let's just pretend I didn't "
            "forget to set up the actual game loop... Ahem, onwards!\n";
        Utility::waitForEnter();
    }
};

// Function to handle the main game loop
void gameLoop(Player& player) {
    int choice;
    bool keepPlaying = true;

    while (keepPlaying) {
        // Clear console before showing options
        Utility::clearConsole();

        // Display options to the player
        cout << "\nWhat would you like to do next, " << player.name << "?\n";
        cout << "1. Battle Wild Pok�mon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pok�mon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        Utility::clearInputBuffer(); // Clear the input buffer

        // Process the player's choice and display the corresponding message
        switch (choice) {
        case 1:
            cout << "You look around... but all the wild Pok�mon are on "
                "vacation. Maybe try again later?\n";
            break;
        case 2:
            cout
                << "You head to the PokeCenter, but Nurse Joy is out on a coffee "
                "break. Guess your Pok�mon will have to tough it out for now!\n";
            break;
        case 3:
            cout << "You march up to the Gym, but it's closed for renovations. "
                "Seems like even Gym Leaders need a break!\n";
            break;
        case 4:
            cout << "You boldly step towards the Pok�mon League... but the "
                "gatekeeper laughs and says, 'Maybe next time, champ!'\n";
            break;
        case 5:
            cout << "You try to quit, but Professor Oak's voice echoes: "
                "'There's no quitting in Pok�mon training!'\n";
            cout << "Are you sure you want to quit? (y/n): ";
            char quitChoice;
            cin >> quitChoice;
            if (quitChoice == 'y' || quitChoice == 'Y') {
                keepPlaying = false;
            }
            break;
        default:
            cout << "That's not a valid choice. Try again!\n";
            break;
        }

        // Wait for Enter key before the screen is cleared and the menu is shown
        // again
        Utility::waitForEnter();
    }

    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}

int main() {
    // Create Pokemon and Player objects for the game
    Pokemon charmander("Charmander", PokemonType::FIRE, 100); // Using parameterized constructor

    // Continue with the main flow of the game
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);

    // Greet the player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Explain the main quest
    professor.explainMainQuest(player);

    // Start the main game loop
    gameLoop(player);

    return 0;
}