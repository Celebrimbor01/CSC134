//CSC 134
//M5T1
//Dalton Reische
//4/6/2025

#include <iostream>
using namespace std;

//Write one void function, and one value returning function, and call them both in main().

//Declare functions
void sayHello();
int giveAnswer();
int doubleNumber(int num);

//Call the functions in main

int main() {



}

//Define the functions

void sayHello() {
    cout << "Hello from the void\n";
    return;
}
int giveAnswer() {
    return 17;
}
int doubleNumber(int num) {
    int newNum = num * 2;
    return newNum;
}
