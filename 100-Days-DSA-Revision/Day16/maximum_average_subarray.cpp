#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {8, 9, 3, 5, 1, 6, 2};
    int k = 3;
    if (k > arr.size())
    {
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int maxSum = sum;
    for (int i = k; i < arr.size(); i++)
    {
        sum -= arr[i - k];
        sum += arr[i];
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }
    cout << double(maxSum) / k;
    return 0;
}