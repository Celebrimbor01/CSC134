//CSC 134
//M3LAB1
//Dalton Reische
//2/25/2025

//This program will simulate a drag race, where the user makes a choice and then finds out if they've won.

#include <iostream>
#include <string>
using namespace std;

//Declare additional functions.
    void chooseCar1();
    void chooseCar2();
    void chooseCar3();

//Begin main function.
int main() {

//Variables
    int choice;

//Prompt the user for their choice of car.
    cout << "Welcome to this years annual drag race!\n";
    cout << "Please type 1, 2, or 3 to choose your car: ";
    cin >> choice;

//Determine what car was chosen.
    if (choice == 1) {
        chooseCar1();
    }
    else if (choice == 2) {
        chooseCar2();
    }
    else if (choice == 3) {
        chooseCar3();
    }
    else {
        cout << "I'm sorry, that is not a valid choice.\n";
    }

    cout << "\nThank you for participating in this years race!\n";

return 0;

}

//Define additional functions.
    void chooseCar1() {
        cout << "\nYou chose car 1\n";
        cout << "You lose...\n";
    }

    void chooseCar2() {
        cout << "\nYou chose car 2\n";
        cout << "You win!\n";
    }

    void chooseCar3() {
        cout << "\nYou chose car 3\n";
        cout << "You tied!\n";
    }