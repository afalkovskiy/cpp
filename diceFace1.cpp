#include <iostream>
#include <string>
using namespace std;

int main() {
  string d1[5] = {
        "┌─────────┐",

        "│         │",

        "│    ●    │",

        "│         │",

        "└─────────┘",};  // An array with 6 elements


  for (string el : d1) {
    cout << el << "\n";
  }
  
  return 0;
}
