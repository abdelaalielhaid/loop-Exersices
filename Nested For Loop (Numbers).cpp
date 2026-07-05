

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code
    
// 1 2 3 4 5 6 7 8 9 10 
// 2 3 4 5 6 7 8 9 10
// 3 4 5 6 7 8 9 10
// 4 5 6 7 8 9 10
// 5 6 7 8 9 10
// 6 7 8 9 10
// 7 8 9 10
// 8 9 10
// 9 10
// 10

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i ; j <= 10 ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
    
    
    
    
    return 0;
}
