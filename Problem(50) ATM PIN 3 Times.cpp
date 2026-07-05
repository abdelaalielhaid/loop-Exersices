

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
    int currectPass = 1234;
    int passCode ;
    int attempts = 0;

    cout << "Enter You'r Pass Code: \n";
    cin >> passCode;

    while (passCode != currectPass && attempts < 2)
    {
        cout << "Wrong try again.\n";
        cin >> passCode;
        attempts++;
    }

    if (passCode == currectPass)
    {
        cout << "You'r Bank Account Balance is: 5.25M USD.";
    }else
    {
        cout << "Carte is Blocked, Contact You'r Bank Pleas.";
    }
    
    return 0;
}