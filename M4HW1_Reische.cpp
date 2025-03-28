//CSC 134
//M4HW1
//Dalton Reische
//3/28/2025

#include <iostream>
using namespace std;

//This program will print a multiplication table

int main () {

//Variables
    int number = 1;

//While loop to print the 5 times table
    while (number <= 12) {
        cout << "5 times " << number << " is " << 5 * number << ".\n";
        number++;
    }

return 0;

}