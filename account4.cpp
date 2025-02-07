// Online C++ compiler to run C++ program online
// an example to start from
#include <iostream>
using namespace std;
#include <string>

int main() {    
    int number;
    string bank = "";

    cout << "What would you like to buy  \n";
    cout << "Enter 1 for Roblox card \n";
    cout << "Enter 2 for vBucks card\n";
    cin >> number;
    
    if (number==1) bank="Roblox";
    else 
        if (number==2) bank="vBucks";
        else bank = "invalid number, try again!";

    // cout << "You entered " << number;    
    cout << "You chosed " << bank;
    return 0;
}
