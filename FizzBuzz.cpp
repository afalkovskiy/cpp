#include <iostream>
using namespace std;
int main ()
{
       cout << "Enter your number ";      // Prompt for input
       cin >> n;                          // Get the input.
       for (int i = 1; i <= n; i++) 
       {
               if ((i % 15) == 0)
                       cout << "FizzBuzz\n";
               else if ((i % 3) == 0)
                       cout << "Fizz\n";
               else if ((i % 5) == 0)
                       cout << "Buzz\n";
               else
                       cout << i << "\n";
       }
       return 0;
}
