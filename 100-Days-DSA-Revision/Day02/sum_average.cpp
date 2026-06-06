#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 9, 1, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    double average = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    average = double(sum) / n;
    cout << "Sum of array: " << sum << endl;
    cout << "Average of array: " << average << endl;
    return 0;
}