#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 8, 2, 7, 4};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum << endl;
    return 0;
}