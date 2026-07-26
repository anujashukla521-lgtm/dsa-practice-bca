#include <iostream>
#include <vector>
using namespace std;

int countSubsequences(vector<int> &nums, int index)
{
    if (index == nums.size())
    {
        return 1;
    }

    int take = countSubsequences(nums, index + 1);
    int skip = countSubsequences(nums, index + 1);

    return take + skip;
}

int main()
{
    vector<int> nums = {3, 1, 2};

    cout << "Number of subsequences: "
         << countSubsequences(nums, 0);

    return 0;
}