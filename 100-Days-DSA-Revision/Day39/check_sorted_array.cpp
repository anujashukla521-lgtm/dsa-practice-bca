#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> &arr, int current, int next)
{
    if (next > arr.size())
    {
        return false;
    }
    if (current <= next && checkSorted(arr, current + 1, next + 1))
    {
        return true;
    }
}
int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    bool sorted = checkSorted(arr, 0, 1);
    cout << sorted;
    return 0;
}