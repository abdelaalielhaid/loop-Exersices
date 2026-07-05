

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code



int ReadNumberFromNToNumberOne()
{
    int Number = 0;
    int x = 1;

    cout << "EnterThe Number: ";
    cin >> Number;

    while (Number >= x)
    {
        cout << Number << endl;
        Number--;
    }
    return Number;
}

void PrintNumber(int Number)
{
    cout << "The Number is: " << Number << endl;
}

int main()
{
    
    PrintNumber(ReadNumberFromNToNumberOne());

    return 0;  
}