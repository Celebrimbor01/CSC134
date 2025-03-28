//CSC 134
//M4HW1 - Gold
//Dalton Reische
//3/28/2025

#include <iostream>
using namespace std;

//This program will print a multiplication table

int main () {

//Variables
    int number = 1;
    int user_number;

//Prompt the user to enter a number from 1 to 12
    cout << "Please enter a number from 1 to 12: ";
    cin >> user_number;

//While loop to validate the users input
    while (user_number < 1 || user_number > 12) {
        cout << "Invalid number.\n"
             << "Please enter a number from 1 to 12: ";
        cin >> user_number;
    }

//While loop to print the 5 times table
    while (number <= 12) {
        cout << user_number << " times " << number << " is " << user_number * number << ".\n";
        number++;
    }

return 0;

}