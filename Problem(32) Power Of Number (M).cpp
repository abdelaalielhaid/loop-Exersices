

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
    int number, power;

    cout << "Enter Number: ";
    cin >> number;
    cout << "Enter Number: ";
    cin >> power;

    int i = 0;
    int sum;
    while (i <= power)
    {
        sum = number * power;
        i++;
    }
    cout << number << " * " << power<< " = " << sum <<endl;
    
    
    
    

    
    
    return 0;
}