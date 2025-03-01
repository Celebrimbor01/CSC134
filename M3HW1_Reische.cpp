//CSC 134
//M3HW1 - Gold
//Dalton Reische
//3/1/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//Question 1: This program will simulate a chat bot.

//Variables
    string answer;

//Give this problem the "Question 1" label.
    cout << "Question 1.\n";
    cout << "\n";

//Prompt the user asking if they like the chat bot.
    cout << "Hello, I'm a C++ chat bot!\n";
    cout << "Do you like me? Please type yes or no.\n";
    cin >> answer;

//Determine how the chat bot will respond.
    if (answer == "yes") {
        cout << "\nThat's great! I'm sure we'll get along.\n";
    }
    else if (answer == "no") {
        cout << "\nWell, maybe you'll learn to like me later.\n";
    }
    else {
        cout << "\nIf you're not sure... that's OK.\n";
    }

//Question 2: This program will simulate a receipt calculator.

//Constants
    const double tipPercent = 0.15;
    const double salestaxPercent = 6.75;

//Variables
    string name;
    string orderType;
    double mealPrice;
    double dineinTip;
    double salestax;

//
    

return 0;

}