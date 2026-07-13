#include <iostream>
#include <vector>
using namespace std;

int findFloor(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int ceil = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target)
        {
            ceil = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ceil;
}
int findCeil(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int ceil = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target)
        {
            ceil = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ceil;
}
int main()
{
    vector<int> arr = {1, 2, 4, 7, 9, 11};
    int floor = findFloor(arr, 3);
    int ceil = findCeil(arr, 3);
    cout << "Floor element " << floor << endl;
    cout << "Ceil element " << ceil << endl;
    return 0;
}