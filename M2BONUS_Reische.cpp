//CSC 134
//M2BONUS
//Dalton Reische
//2/19/2025

//This program will be a ASCII Art Character Creator

#include <iostream>
#include <string>
using namespace std;

int main() {

//Variables
    string character_name;
    int eye_choice;
    int mouth_choice;
    string eyes;
    string mouth;

//Give a prompt asking for the characters name.
    cout << "Welcome to the Character Creator!\n";
    cout << "What would you like to name your character? ";
    getline (cin, character_name);

//Give a prompt asking for the characters eyes.
    cout << "\nChoose your characters eyes:\n";
    cout << "1. O O\n";
    cout << "2. ^ ^\n";
    cout << "3. • •\n";
    cout << "Enter the number of your choice: ";
    cin >> eye_choice;

//Assign the characters eyes based on users input.
    if (eye_choice == 1) {
        eyes = "O O"; }
    else if (eye_choice == 2) {
        eyes = "^ ^"; }
    else if (eye_choice == 3) {
        eyes = "• •"; }
    else {
        eyes = "??"; }

//Give a prompt asking for the characters mouth.
        cout << "\nChoose your characters mouth:\n";
        cout << "1. ___\n";
        cout << "2. ◡\n";
        cout << "3. ᴗ\n";
        cout << "Enter the number of your choice: ";
        cin >> mouth_choice;

//Assign the characters mouth based on users input.
    if (mouth_choice == 1) {
        mouth = "___"; }
    else if (mouth_choice == 2) {
        mouth = "◡"; }
    else if (mouth_choice == 3) {
        mouth = "ᴗ"; }
    else {
     mouth = "??"; }

//Display the final character.
    cout << "\nMeet " << character_name << "!\n\n";
    cout << " " << eyes << "\n";
    cout << " " << mouth << "\n\n";

//Display a creative message.
    cout << "What a unique character! " << character_name << " is ready to embark on a new adventure.\n";

return 0;

}