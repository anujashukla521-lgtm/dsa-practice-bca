#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {6, 8, 2, 9, 4};
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (smallest > arr[i])
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < second_smallest)
        {
            second_smallest = arr[i];
        }
    }
    if (second_smallest == INT_MAX)
    {
        cout << "No second smallest element exists";
    }
    else
    {

        cout << "Second smallest: " << second_smallest;
    }
    return 0;
}