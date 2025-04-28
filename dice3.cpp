/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    
      string d1[5] = {
        "┌─────────┐",

        "│         │",

        "│    ●    │",

        "│         │",

        "└─────────┘",};

	int g;
	for (int i=0; i<10; i++) {
    	  cout << "your guess [1-6]:";
          cin >> g; // Get user input from the keyboard
          if (g>6){
              cout << "Your guess cannot be greater than 6 \n";
              continue;
          }
  			cout << "Your guess is: " << g << "\n";
  			
  			int randomNum = rand() % 6 + 1;


            if (randomNum==1){
                  for (string el : d1) 
                    cout << el << "\n";
            }
            
            cout << "Rolled " << randomNum << "\n";
    
    }

  return 0;}
