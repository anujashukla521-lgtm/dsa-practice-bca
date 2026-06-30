#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> arr, int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {100, 90, 70, 55, 40, 20, 10};
    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int index = binarySearch(arr, arr.size(), target);
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