//CSC 134
//M5HW1
//Dalton Reische
//4/19/2025

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Declare functions
string numbertoRoman(int num);
void geometryMenu();
double circleArea(double radius);
double rectangleArea(double length, double width);
double triangleArea(double base, double height);

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

//Question 3: Display the roman numeral for a number input by the user.

//variables
    int number;

//Give this problem the "Question 3" label.
    cout << "\nQuestion 3.\n";

//Prompt the user for a number to be converted.
    cout << "\nEnter a number (1-10): ";
    cin >> number;
    cout << "The Roman numeral version of " << number << " is " << numbertoRoman(number) << ".\n";

//Question 4: This program will display a geometry calculator menu.

//Give this problem the "Question 4" label.
    cout << "\nQuestion 4.\n";

geometryMenu();

//Question 5: This program is a distance traveled calculator

//variables
    int speed, hours;

//Give this problem the "Question 5" label.
    cout << "\nQuestion 5.\n";

//Prompt the user for the speed and the hours traveled.
    cout << "\nWhat is the speed of the vehicle in MPH? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> hours;
    cout << "\nHour   Distance Traveled\n";
    cout << "--------------------------------\n";

//Loop to calculate and display the distance for each hour traveled.
    for (int hour = 1; hour <= hours; ++hour) {
        int distance = speed * hour;
        cout << hour << "\t\t" << distance << endl;
    }

return 0;
}

//Define functions

string numbertoRoman(int num) {
    string roman;
    switch (num) {
        case 1: roman = "I"; break;
        case 2: roman = "II"; break;
        case 3: roman = "III"; break;
        case 4: roman = "IV"; break;
        case 5: roman = "V"; break;
        case 6: roman = "VI"; break;
        case 7: roman = "VII"; break;
        case 8: roman = "VIII"; break;
        case 9: roman = "IX"; break;
        case 10: roman = "X"; break;
        default: roman = "Invalid number"; break;
    }
    return roman;
}

void geometryMenu() {

    cout << "\nGeometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "\nChoose: ";
    int choice;
    cin >> choice;
  
    if (1 == choice) {
        double radius;
        cout << "\nEnter the radius of the circle: ";
        cin >> radius;
        cout << "\nThe area of the circle is: " << circleArea(radius) << endl;
    } else if (2 == choice) {
        double length;
        double width;
        cout << "\nEnter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "\nThe area of the rectangle is: " << rectangleArea(length, width) << endl;
    } else if (3 == choice) {
        double base;
        double height;
        cout << "\nEnter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        cout << "\nThe area of the triangle is: " << triangleArea(base, height) << endl;;
    } else if (4 == choice) {
        cout << "\nOk, quitting calculator\n";
        return; // go back to main()
  } else {
    cout << "\nThe valid choices are 1 through 4, please try again.\n";
    cin.ignore(); // clear the user input
    geometryMenu();  // try again
  }
}

  double circleArea(double radius) {
    return 3.14159 * pow(radius, 2);
  }

  double rectangleArea(double length, double width) {
    return length * width;
  }

  double triangleArea(double base, double height) {
    return 0.5 * base * height;
  }