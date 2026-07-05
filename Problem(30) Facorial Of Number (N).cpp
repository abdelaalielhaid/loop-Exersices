

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
    int N;

    cout << "Enter Number: ";
    cin >> N;

    while (N < 0)
    {
        cout << ":-( Wrong Try Again\n Enter a Positiv Number.";
        cin >> N; 
    }
    
    int i = 1;
    int factorial = 1;
    while (i <= N )
    {
        factorial *= i;
        i++;
    }
    cout << factorial;
    

    
    
    return 0;
}