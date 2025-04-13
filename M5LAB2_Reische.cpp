//CSC 134
//M5LAB2
//Dalton Reische
//4/13/2025

#include <iostream>
using namespace std;

//This program will calculate the area of a rectangle

//Declare functions
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main () {

//Variables
    double length;    // The rectangle's length
    double width;     // The rectangle's width
    double area;      // The rectangle's area
   
// Get the rectangle's length.
    length = getLength();

// Get the rectangle's width.
    width = getWidth();

// Get the rectangle's area.
    area = getArea(length, width);

// Display the rectangle's data.
    displayData(length, width, area);

return 0;
}

//Define functions
double getLength() {
    double length;
    cout << "Please enter the length of the rectangle: ";
    cin >> length;
    return length;
}

double getWidth() {
    double width;
    cout << "Please enter the width of the rectangle: ";
    cin>> width;
    return width;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "\nHere is the data of the rectangle you entered:\n";
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}