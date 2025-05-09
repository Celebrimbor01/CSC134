// CSC 134
// M7T2 - Gold/Bonus
// Dalton Reische
// 5/10/25

#include <iostream>
#include "Rectangle.h"
using namespace std;

//Function main

int main() {

Rectangle box; //Define an instance of the Rectangle class
double rectWidth; //Local variable for width
double rectLength; //Local variable for length

//Get the rectangle's width and length from the user.

cout << "This program will calculate the area of a rectangle.\n";

//Validate the user's width input.

do{
    cout << "\nWhat is the width? ";
    cin >> rectWidth;
    if (rectWidth <= 0) {
        cout << "Invalid Width. Width must be greater than zero.\n";
    }
} while (rectWidth <= 0);
box.setWidth(rectWidth);

do{
    cout << "\nWhat is the length? ";
    cin >> rectLength;
    if (rectLength <= 0) {
        cout << "Invalid Length. Length must be greater than zero.\n";
    }
} while (rectLength <= 0);
box.setLength(rectLength);

//Display the rectangle's data.

cout << "\nHere is the rectangle's data:\n";
cout << "\nWidth: " << box.getWidth() << endl;
cout << "Length: " << box.getLength() << endl;
cout << "Area: " << box.getArea() << endl;

return 0;

}
