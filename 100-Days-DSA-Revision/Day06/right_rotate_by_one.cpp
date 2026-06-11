#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {6, 9, 1, -2, 0, 4};
    int n = arr.size();
    int temp = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}