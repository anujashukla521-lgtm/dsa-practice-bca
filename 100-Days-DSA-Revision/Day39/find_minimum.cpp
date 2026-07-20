#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimum(vector<int> &arr, int index, int n)
{
    if (index == n - 1)
    {
        return arr[index];
    }
    return min(arr[index], minimum(arr, index + 1, n));
}
int main()
{
    vector<int> arr = {4, 7, 2, 9, 5};
    int n = arr.size();
    cout << "Minimum element: " << minimum(arr, 0, n);
    return 0;
}