#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {-1, 7, 9, -5, 3, -6, 4, 3, 1, 5, -3};
    int sum = 0;
    int maxSum = INT_MIN;
    int start = 0;
    int end = 0;
    int tempStart = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum > maxSum)
        {
            maxSum = sum;
            start = tempStart;
            end = i;
        }
        if (sum < 0)
        {
            sum = 0;
            tempStart = i + 1;
        }
    }
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nMaximum sum: " << maxSum << endl;
    cout << "Start index: " << start << endl;
    cout << "End index: " << end << endl;

    return 0;
}