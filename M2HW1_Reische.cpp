//CSC 134
//M2HW1 - 
//Dalton Reische
//2/17/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//Question 1: This program will simulate banking transactions.

//Constants
    const int account_number = 6973990106;

//Variables
    string name;
    double starting_balance;
    double deposit_amount;
    double withdrawal_amount;

//Give this problem the "Question 1" label.
    cout << "Question 1.\n";
    cout << "\n";

//Give the user a prompt for their transaction details.
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter the accounts current balance: $";
    cin >> starting_balance;
    cout << "Please enter the amount you wish to deposit: $";
    cin >> deposit_amount;
    cout << "Please enter the amount you wish to withdrawal: $";
    cin >> withdrawal_amount;

}