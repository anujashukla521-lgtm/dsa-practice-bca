#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {7, 9, 23, 12, 3, 1, 8, -5};
    int minimum = arr[0];
    for (int i = 0; i < 8; i++)
    {
        if (minimum > arr[i])
        {
            minimum = arr[i];
        }
    }
    cout << "Mininum element: " << minimum;
    return 0;
}