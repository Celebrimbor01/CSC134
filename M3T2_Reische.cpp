//CSC 134
//M3T2
//Dalton Reische
//2/22/2025

//This program will calculate the area of two rectangles and display which has the larger area or if they are equal.

#include <iostream>
#include <string>
using namespace std;

int main() {

//Variables
    double length_one, width_one;
    double area_one;
    double length_two, width_two;
    double area_two;

//Prompt the user for the length and width of both rectangles.
    cout << "Please enter the length and width of the first rectangle (in feet), seperated by a space: ";
    cin >> length_one >> width_one;
    cout << "Please enter the length and width of the second rectangle (in feet), seperated by a space: ";
    cin >> length_two >> width_two;

//Calculate the area of both rectangles.
    area_one = length_one * width_one;
    area_two = length_two * width_two;

//Display the calculated area of both rectangles.
    cout << endl;
    cout << "The area of rectangle one is: " << area_one << " sq ft\n";
    cout << "The area of rectangle two is: " << area_two << " sq ft\n";
    cout << endl;

//Determine which rectangle is bigger.
    if (area_one > area_two) {
        cout << "Rectangle one is bigger.\n"; 
    }
    if (area_two > area_one) {
        cout << "Rectangle two is bigger.\n"; 
    }
    if (area_one == area_two) {
        cout << "They are the same size.\n";
    }

return 0;

}