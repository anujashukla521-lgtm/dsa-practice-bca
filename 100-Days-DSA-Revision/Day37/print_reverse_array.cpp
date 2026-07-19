#include <iostream>
#include <vector>
using namespace std;

void printArray(int i, int n, vector<int> &arr)
{
    if (i < 0)
    {
        return;
    }
    cout << arr[i] << " ";
    printArray(i - 1, n, arr);
}
int main()
{
    vector<int> arr = {5, 7, 1, 5, 2};
    int n = arr.size();
    printArray(n - 1, n, arr);
    return 0;
}