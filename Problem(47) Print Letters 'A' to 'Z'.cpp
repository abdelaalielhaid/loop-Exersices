

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code






int main()
{
    char from = 65, to = 90;
    int number;

    cout << "Enter Number From [65] To [90] to change it to ASCII value \n";
    cin >> number;
    
    while (number <= to)
    {
        cout << char(number) << endl; // Data Typ Casting (From int To char)
        // cout << (char) number << endl; // The same her.
        number++;
    }
    
    
    return 0;
}