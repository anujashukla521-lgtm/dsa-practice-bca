#include <iostream>
#include <vector>
using namespace std;

void combination_sum(vector<int> &arr, int index, int target, vector<int> &curr, vector<vector<int>> &ds)
{
    if (index == arr.size())
    {
        if (target == 0)
            ds.push_back(curr);
        return;
    }
    if (arr[index] <= target)
    {
        curr.push_back(arr[index]);
        combination_sum(arr, index, target - arr[index], curr, ds);
        curr.pop_back();
    }
    combination_sum(arr, index + 1, target, curr, ds);
}
int main()
{
    vector<int> arr = {2, 3, 6, 7};
    vector<int> curr;
    vector<vector<int>> ans;
    combination_sum(arr, 0, 7, curr, ans);
    for (vector<int> n : ans)
    {
        cout << "{ ";
        for (int x : n)
        {
            cout << x << " ";
        }
        cout << "}\n";
    }
    return 0;
}