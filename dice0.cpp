#include <iostream>
using namespace std;

int main() {
	int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x << "\n";

	int g;
	for (int i=0; i<10; i++) {
    	  cout << "your guess [1-6]:";
          cin >> g; // Get user input from the keyboard
  			cout << "Your guess is: " << g << "\n";
    
    }

  return 0;
}
