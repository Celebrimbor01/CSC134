//CSC 134
//M5LAB1
//Dalton Reische
//4/12/2025

#include <iostream>
using namespace std;

//This program is a build your own adventure

// Declare Functions
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_tool_shed();
void choice_check_box();
void choice_go_inside();
void choice_take_book();

int main() {

  cout << "M5LAB1 - Choose Your Own Adventure\n";

  // load up the main menu
  main_menu();

  // when we return here, we're done
  cout << "\nThanks for playing!\n";

  return 0; // finished with no errors

}

void main_menu() {

  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "\n*Main Menu*\n";
  cout << "\nYou're in front of a spooky old house...\n";
  cout << "Do you:\n";
  cout << "\n1. Try the front door\n";
  cout << "2. Sneak around back\n";
  cout << "3. Forget it, and go home\n";
  cout << "4. [Quit]\n";
  cout << "\nChoose: ";
  int choice;
  cin >> choice;

  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "\nOk, quitting game\n";
    return; // go back to main()
  } else {
    cout << "\nThat's not a valid choice, please try again.\n";
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// Define Functions
void choice_front_door() {
  cout << "\nYou try the front door.\n";
  cout << "It's locked.\n";
  cout << "\nDo you:\n";
  cout << "\n1. Check around back\n";
  cout << "2. Give up and go home\n";
  int choice;
  cout << "\nChoose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() {
  cout << "\nYou walk around back and try the door.\n";
  cout << "It's open but you also see a shed in the backyard.\n";
  cout << "\nDo you:\n";
  cout << "\n1. Proceed inside\n";
  cout << "2. Check the tool shed\n";
  cout << "3. Give up and go home\n";
  int choice;
  cout << "\nChoose: ";
  cin >> choice;
  if (1 == choice) {
    choice_go_inside();
  } else if (2 == choice) {
    choice_tool_shed();
  } else if (3 == choice) {
    choice_go_home();
  }
 }

 void choice_go_inside() {
   cout << "\nYou proceed inside the house, it's dark and somewhat hard to breath.\n";
   cout << "You take a few more steps and then you feel a sharp, hot pain in your back\n";
   cout << "You fall to the ground and bleed out, murdered by someone in the shadows\n";
  
   }

 void choice_tool_shed() { 
  cout << "\nYou walk up to the shed and peak through a window.\n";
  cout << "There is a little candle flickering in the corner illuminating a box in the center of the room.\n";
  cout << "\nDo you:\n";
  cout << "\n1. Open the door and check the box\n";
  cout << "2. Turn around and check the back door\n";
  cout << "3. Give up and go home\n";
  int choice;
  cout << "\nChoose: ";
  cin >> choice;
  if (1 == choice) {
    choice_check_box();
  } else if (2 == choice) {
    choice_go_inside();
  } else if (3 == choice) {
    choice_go_home();
  }
}

void choice_check_box() {
  cout << "\nYou proceed into the shed and open the dimly lit box\n";
  cout << "There is a book lying in the bottom with a very old looking leather cover\n";
  cout << "\nDo you:\n";
  cout << "\n1. Take the book and go home\n";
  cout << "2. Turn around and check the back door first\n";
  cout << "3. Leave the book and go home\n";
  int choice;
  cout << "\nChoose: ";
  cin >> choice;
  if (1 == choice) {
    choice_take_book();
  } else if (2 == choice) {
    choice_go_inside();
  } else if (3 == choice) {
    choice_go_home();
  }
}

void choice_take_book() {
  cout << "\nYou proceed to take the book and run straight home \n";
  cout << "You can't wait to show it to all your friends\n";
  cout << "Although, you can't help but feel this strange energy radiating from the book...\n";
}

void choice_go_home() {
  cout << "\nYou couldn't find the courage to continue on\n";
  cout << "You give up and head home \n";
}