#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {7, 9, 2, 5, 1, 3};
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}