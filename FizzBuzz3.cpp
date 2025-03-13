#include <iostream>
using namespace std;
int main ()
{
       int i(0);
       
       cout << "Enter your number ";      // Prompt for input
       cin >> i;                          // Get the input.

        if ((i % 3) == 0)
                       cout << "Fizz\n";  
 // add here a piece of code to output Buzz if divisible by 5
        if ((i % 5) == 0)
                       cout << "Buzz\n";  
                       
        if ((i % 3) == 0 & (i % 5) == 0)
                       cout << "FizzBuzz\n"; 
              
 
 
 // output FizzBuzz if divisible by 3 and 5

       return 0;
}
