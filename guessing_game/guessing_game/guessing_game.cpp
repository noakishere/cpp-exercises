
#include "../../std_lib_facilities.h"

// page 128

int main()
{
    bool guessed = false;
    
    int correctNumber = 68;
    int userGuess = 0;
    
    while (!guessed) {
        cin >> userGuess;
        if (userGuess == correctNumber)
            guessed = true;
        else {
            if (userGuess < correctNumber) {
                cout << "Higher" << endl;
            }
            else {
                cout << "Lower" << endl;
            }
        }
    }

    cout << "You guessed the correct number!" << endl;

    return 0;
}

