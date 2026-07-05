

#include <iostream> // its a library we need it to Prdouble and more functions
#include <cctype>
#include <string> // a library for "string"
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>// library for Math Ready functions.
using namespace std; // for make the code double abbreviation the code


// Do While Loop
int redTowNumbersInRangrdo(int from, int to) 
{
    int number;
    do
    {
        cout << "Enter NumberBetwenn [" << from << "] and [" << to << "]" << endl;
        cin >> number;
    } while (number < from || number > to);

    return number;
}

// While Loop
int redTowNumbersInRangrwhile(int from, int to)
{
    int number;
    cout << "Enter NumberBetwenn [" << from << "] and [" << to << "]" << endl;
        cin >> number;
    while (number < 1 || number > 10)
    {
        cout << "Enter NumberBetwenn [" << from << "] and [" << to << "]" << endl;
        cin >> number;
    }
    

    return number;
}



int main()
{
    
    redTowNumbersInRangrwhile(1, 10);
    redTowNumbersInRangrdo(1, 10);
    
    return 0;
}