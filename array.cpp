#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime> 
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0];
  srand(time(0));
  int randomNum = rand() % 3;
  
    cout << randomNum;
cout << "\n" << cars[randomNum];
  
  
  return 0;
}
