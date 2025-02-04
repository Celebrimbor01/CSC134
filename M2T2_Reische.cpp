//CSC 134
//M2T2
//Dalton Reische
//2/4/2025
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
//Get the users name and store in a variable
    string name;     //Create the variable
    cout << "Please enter your name: ";     //Ask for the users name
    cin >> name;     //Store the users name in the variable
//Get the number of pokemon packs the user owns
    int card_packs;     //Create the variable
    cout << "How many packs of Pokemon cards do you own: ";     //Ask for the users number of packs
    cin >> card_packs;     //Store the value entered in the variable
    double pricePerApple = 0.15;
// Calculate the total price of the apples
    double totalPrice = card_packs * pricePerApple;
// Print all the information about the apple farm
    cout << "Welcome to " << name << "'s card shop!\n";
    cout << "We have " << card_packs << " packs of Pokemon in stock\n";
    cout << "Pokemon packs are currently $" << pricePerApple << " each.\n";
    cout << fixed << setprecision(2);
    cout << "The final price will be $" << totalPrice <<endl;
    cout << "Thanks for visiting my card shop!\n";

    return 0;
}