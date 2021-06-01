// emperor-chess-reward.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "../../std_lib_facilities.h"

//exercise 8 page 219

int main()
{
    int rewards = 1;

    /*for (int i = 1; i < 64; i++) {
        rewards += 2 * i;
    }*/

    int squares = 0;

    while (rewards < 1000) {
        squares++;
        cout << "Square number: " << squares;
        rewards += 2 * squares;
        cout << "Rewards number: " << rewards << endl;
    }

    cout << rewards << " and " << squares;
}

