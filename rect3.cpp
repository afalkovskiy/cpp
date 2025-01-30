#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int rows, columns;
    char symbol;

    cout << "How many rows and columns do you want, and with what symbol (default     is *) ?" << endl;
    cin >> rows >> columns >> symbol;
    cout << endl;
    
    for (int y = 1; y <= rows; y++) {
        for (int x = 1; x <= columns; x++) {
            // if(x==y or x==int(columns/2))
            if(x==y or x==floor(columns/2) or x==(rows - y))
                cout << "  " << symbol;
            else 
                cout << "   ";
        }
        cout << endl;
    }

    return(0);

}
