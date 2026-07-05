

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code


int ageRenge(int from, int to)
{
    int number;
    cout <<"Enter The Age Between ["<< from << "] and "<<"["<< to << "]:\n";
    cin>> number;
    while (number <= from || number >= to)
    {
        cout << ":-( Try Again \n Pleas Enter Age Between ["<< from << "] and "<<"["<< to << "]:\n";
        cin>> number;
    }
    return number;
    
}


int main()
{
    int from, to;

    ageRenge(18, 35);
    
    
    
    
    
    
    
    
    
    
    return 0;
}
