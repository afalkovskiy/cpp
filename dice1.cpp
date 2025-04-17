#include <iostream>
using namespace std;

int main() {

	int g;
	for (int i=0; i<10; i++) {
    	  cout << "your guess [1-6]:";
          cin >> g; // Get user input from the keyboard
  			cout << "Your guess is: " << g << "\n";
  			
  			int randomNum = rand() % 6;

            cout << "Rolled " << randomNum << "\n";
    
    }

  return 0;
}
