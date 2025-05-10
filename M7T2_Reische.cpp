// CSC 134
// M7T2 - Gold
// Dalton Reische
// 5/10/25

#include <iostream>
using namespace std;

//Rectangle class declaration.
class Rectangle
{
    private:
        double width;
        double length;

    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

//setWidth assigns a value to the width member.

void Rectangle::setWidth(double w)
{
    width = w;
}

//setLength assigns a value to the length member.

void Rectangle::setLength(double len)
{
    length = len;
}

//getWidth returns the value in the width member.

double Rectangle::getWidth() const
{
    return width;
}

//getLength returns the value in the length member.

double Rectangle::getLength() const
{
    return length;
}

//getArea returns the product of width times length.

double Rectangle::getArea() const
{
    return width * length;
}

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
