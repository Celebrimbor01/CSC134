//CSC 134
//M2HW1 - Gold
//Dalton Reische
//2/17/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//Question 1: This program will simulate banking transactions.

//Constants
    const long int account_number = 7355990106;

//Variables
    string name;
    double starting_balance;
    double deposit_amount;
    double new_balance;
    double withdrawal_amount;
    double final_balance;

//Give this problem the "Question 1" label.
    cout << "Question 1.\n";
    cout << "\n";

//Set the output formatting for the numbers.
    cout << setprecision(2) << fixed <<showpoint;

//Give the user a prompt for their transaction details.
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter the accounts current balance: $";
    cin >> starting_balance;
    cout << "Please enter the amount you wish to deposit: $";
    cin >> deposit_amount;
    cout << "Please enter the amount you wish to withdrawal: $";
    cin >> withdrawal_amount;

//Calculate the final account balance
    new_balance = starting_balance + deposit_amount;
    final_balance = new_balance - withdrawal_amount;

//Print all the information about the users bank account.
    cout << "\n";
    cout << "Name on the account: " << name << endl;
    cout << "Account number: " << account_number << endl;
    cout << "Account balance after withdrawal: $" << final_balance << endl;

//Question 2: I will be modifying the code for M2LAB1 to meet the new cost conditions.

//Constants
    const double cost_per_cubic_foot = 0.3;
    const double charge_per_cubic_foot = 0.52;

//Variables
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

//Give this problem the "Question 2" label.
    cout << "\n";
    cout << "Question 2.\n";
    cout << "\n";

//Set the output formatting for the numbers.
    cout << setprecision(2) << fixed <<showpoint;

//Give the user a prompt for the crates dimensions.
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    cout << "\n";

//Calculate the crate's volume, cost to produce, charge to the customer, and the profit
    volume = length * width * height;
    cost = volume * cost_per_cubic_foot;
    charge = volume * charge_per_cubic_foot;
    profit = charge - cost;

//Display the calculated data
    cout << "The volume of the crate is " << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

//Question 3: This program will calculate how many slices of pizza are left at a party.

//Constants
    const int slices_per_person = 3;

//Variables
    double pizzas_ordered;
    double slices_per_pizza;
    double people_attending_party;
    double total_slices;
    double slices_eaten;
    double slices_left;

//Give this problem the "Question 3" label.
    cout << "\n";
    cout << "Question 3.\n";
    cout << "\n";

//Set the output formatting for the numbers.
    cout << setprecision(1) << fixed <<showpoint;

//Give the user a prompt for the pizza party details.
    cout << "How many pizzas were ordered for the party: ";
    cin >> pizzas_ordered;
    cout << "How many slices would you like per pizza: ";
    cin >> slices_per_pizza;
    cout << "How many people will be attending the pizza party: ";
    cin >> people_attending_party;
    cout << "\n";

//Calculate the total slices, slices eaten, and slices left.
    total_slices = pizzas_ordered * slices_per_pizza;
    slices_eaten = people_attending_party * slices_per_person;
    slices_left = total_slices - slices_eaten;

//Display the data calculated for the pizza party.
    cout << "Welcome to my pizza party!\n";
    cout << "I ordered " << pizzas_ordered << " pizzas for " << people_attending_party << " people.\n";
    cout << "If everybody eats " << slices_per_person << " slices then we should have " << slices_left << " slices left.\n";
    cout << "Thank you for coming to my pizza party!\n";

//Question 4: This program is a cheering program for a sports team.

//Variables
    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne = letsGo + school;
    string cheerTwo = letsGo + team;

//Give this problem the "Question 4" label.
    cout << "\n";
    cout << "Question 4.\n";
    cout << "\n";

//Display the cheer
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

return 0;

}