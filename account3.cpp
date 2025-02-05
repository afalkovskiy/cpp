#include <iostream>
using namespace std;

int main() {    
    int number;
    int valNumber= 2233;
    int accounts[5] = {1111, 1122, 2233, 3344, 5566};
    
    for (int i=0; i<5; i++ ){
        cout << accounts[i] << "\n";
    }

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
