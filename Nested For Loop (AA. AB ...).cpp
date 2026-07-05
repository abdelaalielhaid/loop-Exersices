

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
    for (char i = 65; i <= 90; i++)
    {
        cout << "Letter: " <<char(i) << endl;
        for (char j = 65; j <= 90; j++)
        {
            cout << char(i) << char(j) << endl;
        }
        cout << "---------";
    }
    return 0;
}
