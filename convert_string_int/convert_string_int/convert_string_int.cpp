#include "../../std_lib_facilities.h"

// exercise 6 page 128

vector<string> numbersInString = { "one", "two",
                                    "three", "four", 
                                    "five", "six", 
                                    "seven", "eight", 
                                     "nine", "ten"};

string giveMeString(int number) 
{
    return numbersInString[number - 1];
}

int giveMeInt(string number)
{
    for (int i = 0; i < numbersInString.size(); ++i) {
        if (numbersInString[i] == number)
            return i + 1;
    }

    return 0;
}

int main()
{
    cout << "Please enter an Integer" << endl;
    
    int number = 0;
    cin >> number;

    cout << "The number is : " << giveMeString(number) << endl;

    cout << "Please enter a string number" << endl;

    string number_str = "";
    cin >> number_str;

    cout << "The Number is: " << giveMeInt(number_str);

    return 0;
}
