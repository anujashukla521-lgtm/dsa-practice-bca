#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {-1, 7, 9, -5, 3, -6, 4, 3, 1, 5, -3};
    int sum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum > maxSum)
        {
            maxSum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxSum;
    return 0;
}