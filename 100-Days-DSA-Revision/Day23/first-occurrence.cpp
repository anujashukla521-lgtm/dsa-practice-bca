#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(const vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 2, 2, 3, 4, 4, 5, 5, 6};

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int index = firstOccurrence(arr, target);
    if (index != -1)
    {
        cout << "First occurrence at index: " << index;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}