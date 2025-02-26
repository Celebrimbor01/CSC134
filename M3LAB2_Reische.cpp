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

//Prompt the user for the numerical grade.
    cout << "Please enter your numerical grade: ";
    cin >> numericalGrade;

//Convert the numerical grade into a letter grade.
    if (numericalGrade >= 90 && numericalGrade <= 100) {
        cout << "\nYour letter grade is: A\n";
    }
    else if (numericalGrade >= 80 && numericalGrade <= 89) {
        cout << "\nYour letter grade is: B\n";
    }
    else if (numericalGrade >= 70 && numericalGrade <= 79) {
        cout << "\nYour letter grade is: C\n";
    }
    else if (numericalGrade >= 60 && numericalGrade <= 69) {
        cout << "\nYour letter grade is: D\n";
    }
    else if (numericalGrade >= 0 && numericalGrade <= 59) {
        cout << "\nYour letter grade is: F\n";
    }
    else {
        cout << "\nInvalid grade entered.\n";
    }

return 0;

}