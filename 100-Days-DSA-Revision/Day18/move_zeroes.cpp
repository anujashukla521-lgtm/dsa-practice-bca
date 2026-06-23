#include <iostream>
#include <vector>
using namespace std;

void move_zeroes(vector<int> &arr)
{
    int slow = 0, fast = 0;
    while (fast < arr.size())
    {
        if (arr[fast] != 0)
        {
            arr[slow] = arr[fast];
            slow++;
        }
        fast++;
    }
    while (slow < arr.size())
    {
        arr[slow] = 0;
        slow++;
    }
}
int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};

    move_zeroes(arr);
    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}