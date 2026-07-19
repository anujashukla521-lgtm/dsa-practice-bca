#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(int index, int n, int target, vector<int> &arr)
{
    if (index < 0)
    {
        return -1;
    }
    if (target == arr[index])
    {
        return index;
    }
    return lastOccurrence(index - 1, n, target, arr);
}
int main()
{
    vector<int> arr = {1, 7, 8, 3, 1, 5, 1, 2};
    int n = arr.size();
    cout << "Last occurrence: " << lastOccurrence(n - 1, n, 1, arr);
    return 0;
}