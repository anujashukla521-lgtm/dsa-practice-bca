#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> &arr, int i, int target)
{
    if (i == arr.size())
    {
        return -1;
    }
    if (arr[i] == target)
    {
        return i;
    }
    linear_search(arr, i + 1, target);
}
int main()
{
    vector<int> arr = {4, 7, 2, 9, 5};
    int target;
    cout << "Enter target: ";
    cin >> target;
    int index = linear_search(arr, 0, target);
    if (index != -1)
    {
        cout << "Element found at index " << index;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}