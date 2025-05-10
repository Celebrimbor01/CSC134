// CSC 134
// M7T2 - Gold
// Dalton Reische
// 5/10/25

#ifndef RECTANGLE_H
#define RECTANGLE_H

//Rectangle class declaration.
//This version uses some inline member functions.
class Rectangle
{
    private:
        double width;
        double length;

    public:
        void setWidth(double);
        void setLength(double);

        double getWidth() const
        { return width; }

        double getLength() const
        { return length; }

        double getArea() const
        {return width * length; }
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

#endif