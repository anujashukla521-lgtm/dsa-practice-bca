#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sort_arr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

void pair_with_given_sum(vector<int> &arr, int target)
{
    if (arr.empty())
    {
        return;
    }

    if (arr.size() < 2)
    {
        cout << "Pair not found";
        return;
    }

    int n = arr.size();
    sort_arr(arr);
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << "Pair found" << endl;
            cout << arr[left] << " " << arr[right];
            return;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << "Pair not found";
}
int main()
{
    vector<int> arr = {1, 2, 4, 6, 8};
    int target;
    cout << "Enter target sum: ";
    cin >> target;
    pair_with_given_sum(arr, target);
    return 0;
}