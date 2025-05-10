// CSC 134
// M7T1
// Dalton Reische
// 5/10/25

#include <iostream>
using namespace std;

// Next time we'll put the class in a separate file
class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }

    void display() const{
        cout << "\nRestaurant: " << name << ", Rating: " << rating << "/5 stars.\n";
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;

    Restaurant r1("The Black Tie", 4.2);
    Restaurant r2("Burger Bar", 3.8);
    Restaurant r3("Ruffs", 2.0);

    r1.display();
    r2.display();
    r3.display();

    return 0;

}