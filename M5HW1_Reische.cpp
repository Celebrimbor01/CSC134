//CSC 134
//M5HW1
//Dalton Reische
//4/19/2025

#include <iostream>
#include <iomanip>
using namespace std;

//Declare functions



int main() {
//Question 1: This program will calculate the average rainfall for three months.

//variables
    string monthOne, monthTwo, monthThree;
    double rainOne, rainTwo, rainThree;
    double rainTotal;
    double rainAverage;

//Give this problem the "Question 1" label.
    cout << "Question 1.\n";

//Set the output formatting for the numbers.
    cout << setprecision(2) << fixed;

//Prompt the user for the months and rainfall totals
    cout << "\nEnter month: ";
    cin >> monthOne;
    cout << "Enter rainfall for " << monthOne << ": ";
    cin >> rainOne;
    cout << "Enter month: ";
    cin >> monthTwo;
    cout << "Enter rainfall for " << monthTwo << ": ";
    cin >> rainTwo;
    cout << "Enter month: ";
    cin >> monthThree;
    cout << "Enter rainfall for " << monthThree << ": ";
    cin >> rainThree;

//Calculate the average rainfall for all three months.
    rainTotal = rainOne + rainTwo + rainThree;
    rainAverage =  rainTotal / 3.0;

//Display the average rainfall for all three months.
    cout << "\nThe average rainfall for " << monthOne << ", " << monthTwo << ", and " << monthThree << " is " << rainAverage << " inches.\n";

//Question 2: This program will calculate the volume of a three dimensional hyperrectangle.

//Variables
    double blockWidth, blockLength, blockHeight, blockVolume;

//Give this problem the "Question 2" label.
    cout << "\nQuestion 2.\n";

//Prompt the user for the width, length, and height of the "block".

    cout << "\nEnter the width: ";
    cin >> blockWidth;
    cout << "Enter the length: ";
    cin >> blockLength;
    cout << "Enter the height: ";
    cin >> blockHeight;

//Calculate the volume of the "block".
    blockVolume = blockWidth * blockLength * blockHeight;

//Display the "blocks" volume.
    cout << "\nThe volume based on the numbers you have input is: " << blockVolume << " cubic inches.\n";

return 0;
}