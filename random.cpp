// array and random test
#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    unsigned maxguess(0);
    string arr[4] = {"calgary", "toronto", "lethbridge", "winnipeg"};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i <n; i++)
        cout << arr[i] << '\n';
    
    
// 1. Create a string variable for the secret word
    //string hidden("concealed");
    srand(time(0));
    int iRand;
    iRand = rand() % n;
    cout << "i random = " << iRand << '\n';

}
