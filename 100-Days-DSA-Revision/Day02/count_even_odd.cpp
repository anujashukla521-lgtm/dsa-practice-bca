#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, -9, -2, 4, 61, 31, 67, 3, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count_even = 0;
    int count_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    cout << "Even numbers: " << count_even << endl;
    cout << "Odd numbers: " << count_odd << endl;
    return 0;
}