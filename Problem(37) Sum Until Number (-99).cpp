

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
    int number;

    cout << "Enter Number: ";
    cin >> number;

    
    int sum;
    
    while (number != -99)
    {
        sum += number;
        cout << "Enter Number: ";
        cin >> number;
    }
    cout <<"Total Sum Result: " <<sum;
    
    
    
    

    
    
    return 0;
}