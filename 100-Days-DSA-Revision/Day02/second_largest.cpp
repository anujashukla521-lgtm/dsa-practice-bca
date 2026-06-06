#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {10,10,10,10,10};
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (largest < arr[i])
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }
    if (second_largest == INT_MIN)
    {
        cout << "No second largest element exists";
    }
    else
    {
        cout << "Second largest: " << second_largest;
    }

    return 0;
}