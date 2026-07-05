

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code

// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D E F
// A B C D E F G
// A B C D E F G H
// A B C D E F G H I
// A B C D E F G H I J
// A B C D E F G H I J K


int main()
{
    for (char i = 65; i <= 70; i++)
    {
        for (char j = 65; j <= i; j++)
        {
            cout << char(j) << " ";
        }
        cout << endl;
    }
    
    
    
    
    
    
    
    return 0;
}
