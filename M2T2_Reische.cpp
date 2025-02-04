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
//Get the price each pack is being sold for by the user
    double price_per_pack;     //Create the variable
    cout << "How much does each pack cost: $";     //Ask for the price of each pack
    cin >> price_per_pack;    //Store the price per pack in the variable
// Calculate the total price for all the card packs
    double totalPrice = card_packs * price_per_pack;
// Print all the information about the card shop
    cout << "Welcome to " << name << "'s card shop!\n";
    cout << "We have " << card_packs << " packs of Pokemon in stock.\n";
    cout << fixed << setprecision(2);
    cout << "Pokemon packs are currently $" << price_per_pack << " each.\n";
    cout << fixed << setprecision(2);
    cout << "The total price for all the packs will be $" << totalPrice <<endl;
    cout << "Thanks for visiting my card shop!\n";

    return 0;
}