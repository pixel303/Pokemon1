#include "../../include/Utility/Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

namespace N_Utility {
    void Utility::clearConsole() {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
    }

    void Utility::waitForEnter() {
        cout << "Press Enter to continue..." << endl;
        cin.get();
    }

    void Utility::clearInputBuffer() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}