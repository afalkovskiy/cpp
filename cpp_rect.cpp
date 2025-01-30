#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int rows, columns;
    char symbol;

    cout << "How many rows and columns do you want, and with what symbol (default     is *) ?" << endl;
    cin >> rows >> columns >> symbol;
    cout << endl;
    
    for (int y = 1; y <= rows; y++) {
        for (int x = 1; x <= columns; x++) {
            if(x==y or x==int(columns/2))
                cout << symbol;
            else 
                cout << "  ";
        }
        cout << endl;
    }

    return(0);

}
