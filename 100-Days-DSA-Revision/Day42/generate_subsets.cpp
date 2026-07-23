#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int> &nums, int index, vector<int> &curr, vector<vector<int>> &ans)
{
    if (index == nums.size())
    {
        ans.push_back(curr);
        return;
    }
    curr.push_back(nums[index]);
    generateSubsets(nums, index + 1, curr, ans);
    curr.pop_back();

    generateSubsets(nums, index + 1, curr, ans);
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<int> curr;
    vector<vector<int>> ans;

    generateSubsets(nums, 0, curr, ans);

    for (vector<int> subset : ans)
    {
        cout << "{ ";
        for (int x : subset)
        {
            cout << x << " ";
        }
        cout << "}\n";
    }

    return 0;
}