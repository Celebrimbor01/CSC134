//CSC 134
//M2LAB1
//Dalton Reische
//2/11/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//Give constants
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
//Give Variables
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;
//Set the output formatting for numbers
    cout << setprecision(2) << fixed <<showpoint;
//Give the user a prompt for the crates dimensions
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
}