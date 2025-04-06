//CSC 134
//M5T2
//Dalton Reische
//4/6/2025

#include <iostream>
using namespace std;

//This program will list the numbers 1 to 10 along with their squares.

//Declare and define functions

void printResult(int number, int result) {  //Given two numbers, print them on a line.
    cout << number << "\t---- squared --->\t" << result << endl;
}
int square(int number) { //Given a number, return the square of it.
    int result;
    result = number * number;
    return result;
}

int main() {

//Variables
    int count = 1;
    int result;

//Print two lines of numbers, first being 1-10, second being the square of those numbers.

    while (count <= 10) {
        result = square(count);
        printResult(count, result);
        count++;
    }

return 0;

}