//CSC 134
//M4T1
//Dalton Reische
//3/17/2025

//This program demonstrates a while loop.

#include <iostream>
using namespace std;

int main () {

    int number = 0;

    cout << "Program 5-3: " <<endl;

    while (number < 5)
    {
        cout << "Hello\n";
        number++;
    }

    cout << "Thats all!\n";

//This program displays a list of numbers and their squares

    cout << "\nProgram 5-6: " << endl;

    const int MIN_NUMBER = 1,
              MAX_NUMBER = 10;

    int num = MIN_NUMBER;

    cout << "Number Number Squared\n";
    cout << "-------------------------\n";

    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++;
    }

}