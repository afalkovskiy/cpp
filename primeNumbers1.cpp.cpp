#include <iostream>
using namespace std;
int main ()
{
       int n(0);
       
       cout << "Enter your number ";      // Prompt for input
       cin >> n;                          
    
    for (int i=2; i<=n; i++)  {
        cout << "\n"<< i << " is divisible by \n";
        for (int j=2; j<i; j++){
            if (i%j == 0){
                cout << j << '\t';
            }
        }
    }        
              

       return 0;
}