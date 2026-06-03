// This program checks whether a given number is even or odd using bitwise AND operator. It uses the expression n & 1 to determine the least significant bit of the number, where 0 indicates an even number and 1 indicates an odd number.

#include <iostream>
using namespace std;

bool isEven(int n)
{
    if ((n & 1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (isEven(n))
    {
        cout << n << " is even";
    }
    else
    {
        cout << n << " is odd";
    }
    return 0;
}