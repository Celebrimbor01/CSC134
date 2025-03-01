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

    

return 0;

}