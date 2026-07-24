#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subset(vector<int> &nums, int index, vector<int> &curr, vector<vector<int>> &ans)
{
    ans.push_back(curr);
    if (index == nums.size())
    {
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        if (i > index && nums[i] == nums[i - 1])
        {
            continue;
        }
        curr.push_back(nums[i]);
        subset(nums, i + 1, curr, ans);
        curr.pop_back();
    }
}

int main()
{
    vector<int> nums = {1, 2, 2};

    vector<int> curr;
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    subset(nums, 0, curr, ans);

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