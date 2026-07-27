#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combination_sum(vector<int> &arr, int index, int target, vector<int> &curr, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(curr);
        return;
    }
    for (int i = index; i < arr.size(); i++)
    {
        if (i > index && arr[i] == arr[i - 1])
            continue;

        if (arr[i] > target)
            break;

        curr.push_back(arr[i]);
        combination_sum(arr, i + 1, target - arr[i], curr, ans);
        curr.pop_back();
    }
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2};
    sort(arr.begin(), arr.end());

    vector<int> curr;
    vector<vector<int>> ans;
    combination_sum(arr, 0, 4, curr, ans);
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