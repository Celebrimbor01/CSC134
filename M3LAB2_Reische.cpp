//CSC 134
//M3LAB2
//Dalton Reische
//2/26/2025

//This program will convert numerical grades to letter grades.

#include <iostream>
#include <string>
using namespace std;

//Begin main function.
    int main() {

//Variables
    int numericalGrade;
    char letterGrade;

//Prompt the user for the numerical grade.
    cout << "Please enter your numerical grade: ";
    cin >> numericalGrade;

//Convert the numerical grade into a letter grade.
    if (numericalGrade >= 90 && numericalGrade <= 100) {
        letterGrade = 'A';
    }
    else if (numericalGrade >= 80 && numericalGrade <= 89) {
        letterGrade = 'B';
    }
    else if (numericalGrade >= 70 && numericalGrade <= 79) {
        letterGrade = 'C';
    }
    else if (numericalGrade >= 60 && numericalGrade <= 69) {
        letterGrade = 'D';
    }
    else if (numericalGrade >= 0 && numericalGrade <= 59) {
        letterGrade = 'F';
    }
    else {
        cout << "\nInvalid grade entered.\n";
        return 1;
    }

//Display the letter grade.
    cout << "\nYour letter grade is: " << letterGrade << endl;

return 0;

}