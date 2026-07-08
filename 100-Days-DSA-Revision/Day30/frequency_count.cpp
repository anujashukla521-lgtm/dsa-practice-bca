#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort_arr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

void frequency_count(vector<int> &arr)
{
    if (arr.empty())
    {
        return;
    }

    int n = arr.size();
    int count = 1;
    sort_arr(arr);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            cout << arr[i] << "->" << count << endl;
            count = 1;
        }
    }
    cout << arr[n - 1] << "->" << count;
}
int main()
{
    vector<int> arr = {5, 2, 1, 5, 2, 5, 3};
    frequency_count(arr);
    return 0;
}