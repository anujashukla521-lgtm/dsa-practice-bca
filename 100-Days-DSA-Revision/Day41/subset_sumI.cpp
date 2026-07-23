#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subset_sum(vector<int> &arr, int index, int sum, vector<int> &sumSubset)
{
    if (index == arr.size())
    {
        sumSubset.push_back(sum);
        return;
    }
    subset_sum(arr, index + 1, sum + arr[index], sumSubset);
    subset_sum(arr, index + 1, sum, sumSubset);
}
int main()
{
    vector<int> arr = {3, 1, 2};
    vector<int> sumSubset;
    subset_sum(arr, 0, 0, sumSubset);
    sort(sumSubset.begin(), sumSubset.end());
    for (int n : sumSubset)
    {
        cout << n << " ";
    }
    return 0;
}