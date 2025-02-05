#include <iostream>
using namespace std;

int main() {    
    int number;
    int valNumber= 2233;

    cout << "Enter your account number: ";
    cin >> number;
    cout << "You entered " << number << "\n"; 
    
    //check if this account exist
    
    if (number==valNumber) {
        cout << "This is a valid number";
    }
    else {
        cout << "This number does not exist!";
    }
    
    return 0;
}
