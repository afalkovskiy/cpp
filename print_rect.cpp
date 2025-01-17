

This should do the trick. Added a newline to make it look like a rectangle.

#include <iostream>
#include <iomanip>

using namespace std;

void PrintChar(int row = 5, int column = 10, char symbol = '*');

int main() {

    int rows, columns;
    char symbol;

    cout << "How many rows and columns do you want, and with what symbol (default     is *) ?" << endl;
    cin >> rows >> columns >> symbol;

    PrintChar(rows, columns, symbol);

    return(0);

}

void PrintChar(int row, int column, char symbol) {
    for (int y = 1; y <= column; y++) {
        for (int x = 1; x <= row; x++) {
            cout << symbol;
        }
        cout << endl;
    }
}

