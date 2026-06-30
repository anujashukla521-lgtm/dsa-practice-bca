#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> arr, int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
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
    return -1;
}
int main()
{
    vector<int> arr = {2, 6, 9, 12, 24, 26, 34, 37, 55, 58, 67};
    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int index = binary_search(arr, arr.size(), target);
    cout << index;
    return 0;
}