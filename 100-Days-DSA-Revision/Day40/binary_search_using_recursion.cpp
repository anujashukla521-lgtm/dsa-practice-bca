#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {

        binarySearch(arr, low, mid - 1, target);
    }

    else
        binarySearch(arr, mid + 1, high, target);
    {
    }
}
int main()
{
    int target;
    cout << "Enter target: ";
    cin >> target;
    vector<int> arr = {3, 7, 9, 12, 15, 17, 20};
    int index = binarySearch(arr, 0, arr.size() - 1, target);
    if (index != -1)
    {
        cout << "Element found at index: " << index;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}