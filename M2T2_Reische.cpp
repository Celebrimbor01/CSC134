//CSC 134
//M2T2
//Dalton Reische
//2/4/2025
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
//Give all the variables
    string name = "Dalton Reische";
    int apples = 500;
    double pricePerApple = 0.15;
// Calculate the total price of the apples
    double totalPrice = apples * pricePerApple;
// Print all the information about the apple farm
    cout << "Welcome to " << name << "'s apple farm!\n";
    cout << "We have " << apples << " apples in stock\n";
    cout << "Apples are currently $" << pricePerApple << " each.\n";
    cout << fixed << setprecision(2);
    cout << "The final price will be $" << totalPrice <<endl;
    cout << "Thanks for visiting my apple farm!\n";

    return 0;
}