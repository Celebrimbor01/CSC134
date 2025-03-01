//CSC 134
//M3HW1 - Gold
//Dalton Reische
//3/1/2025

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
//Question 1: This program will simulate a chat bot.

//Variables
    string answer;

//Give this problem the "Question 1" label.
    cout << "Question 1.\n";

//Prompt the user asking if they like the chat bot.
    cout << "\nHello, I'm a C++ chat bot!\n";
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
    const double salestaxPercent = 0.225;

//Variables
    string name;
    int orderType;
    double mealPrice;
    double dineinTip;
    double salesTax;
    double finalPrice;

//Give this problem the "Question 2" label.
cout << "\nQuestion 2.\n";

//Set the output formatting for the numbers.
    cout << setprecision(2) << fixed;

//Prompt the user for their meal information.
    cout << "\nWelcome to my receipt calculator!\n";
    cout << "Please enter your last name: ";
    cin >> name;
    cout << "Please enter the price of your meal: $";
    cin >> mealPrice;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> orderType;

//Determine if dine in tax needs to be added.
    if (orderType == 1) {
        dineinTip = mealPrice * tipPercent;
    }
    else if (orderType == 2) {
        dineinTip = 0;
    }

//Calculate the total tax.
    salesTax = mealPrice * salestaxPercent;

//Calculate the total due.
    finalPrice = mealPrice + dineinTip + salesTax;

//Display the users receipt.
    cout << "\nName: " << name << endl;
    cout << "Meal price: $" << mealPrice << endl;
    cout << "Tax: $" << salesTax << endl;
    cout << "Tip: $" << dineinTip << endl;
    cout << "Total: $" << finalPrice << endl;

//Question 3: This program is a simple choose your own adventure game.

//variables
    string choice;

//Give this problem the "Question 3" label.
    cout << "\nQuestion 3.\n";

//Welcome the user and prompt the user for their choices.
    cout << "\nWelcome to my adventure game!\n";
    cout << "You are standing at a crossroad. Where do you want to go? (left/right): ";
    cin >> choice;

    if (choice == "right") {
        cout << "\nYou encounter a dragon! What do you do? (run/fight): ";
        cin >> choice;
    }
        if (choice == "fight") {
            cout << "\nThe dragon defeats you! Game over.\n";
        }
        else if (choice == "run") {
            cout << "\nYou safely run to a nearby cave, you find a treasure chest!\n";
            cout << "What do you do? (open/ignore): ";
            cin >> choice;
        }
            if (choice == "open") {
                cout << "\nYou find the crown and save the world!\n";
            }
            else if (choice == "ignore") {
                cout << "\nYou walk away and leave the world to it's doom...\n";
            }
    else if (choice == "left") {
        cout << "\nYou take an arrow to the knee... Game over!\n";
    }

//Question 4: This is a math practice program.

//Variables
    int userAnswer;
    int correctAnswer;

//Generate two random single digit numbers.
    srand(time(0));
    int number1 = rand() % 10;
    int number2 = rand() % 10;

//Give this problem the "Question 3" label.
    cout << "\nQuestion 3.\n";

//Display the random numbers and as the user to answer the addition problem.
    cout << "\nWhat is " << number1 << " plus " << number2 << "? ";
    cin >> userAnswer;

//Calculate the correct answer.
    correctAnswer = number1 + number2;

//Determine if the user was right or wrong.
    if (userAnswer == correctAnswer) {
        cout << "\nCorrect! Well done.\n";
    }
    else {
        cout << "\nIncorrect. The correct answer is " << correctAnswer << endl;
    }
    
return 0;

}