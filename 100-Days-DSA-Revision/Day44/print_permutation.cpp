#include <iostream>
#include <vector>
using namespace std;

void generatePermutations(vector<int> &nums,
                          vector<int> &curr,
                          vector<bool> &used,
                          vector<vector<int>> &ans)
{
    // Base Case
    if (curr.size()==nums.size())
    {
       ans.push_back(curr);
        return;
    }

    // Try every element
    for (int i = 0; i < nums.size(); i++)
    {
        if (used[i]==false)
        {
            // Choose
            curr.push_back(nums[i]);
            used[i]=true;

            // Explore
            generatePermutations(nums,curr,used,ans);

            // Undo
            curr.pop_back();
            used[i]=false;
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans;
    vector<int> curr;
    vector<bool> used(nums.size(), false);

    generatePermutations(nums, curr, used, ans);

    for (auto permutation : ans)
    {
        for (int x : permutation)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}