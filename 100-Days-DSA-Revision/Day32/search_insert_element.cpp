#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 3, 7, 9, 12, 17, 21, 25};
    int index = searchInsert(arr, 10);
    cout << index;
    return 0;
}