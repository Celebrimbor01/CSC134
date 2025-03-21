//CSC 134
//M4LAB1
//Dalton Reische
//3/21/2025

//This program will draw a 5x5 block of asterisks using nested loops

#include <iostream>
using namespace std;

int main () {

//Draw the 5x5 block of asterisks using a nested loop

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) { cout << "* "; }
        cout << endl;
    }

return 0;

}