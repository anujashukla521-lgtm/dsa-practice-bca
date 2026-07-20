#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximum(vector<int> &arr, int index, int n)
{
    if (index == n - 1)
    {
        return arr[index];
    }
    return max(arr[index], maximum(arr, index + 1, n));
}
int main()
{
    vector<int> arr = {4, 7, 2, 9, 5};
    int n = arr.size();
    cout << "Maximum element: " << maximum(arr, 0, n);
    return 0;
}