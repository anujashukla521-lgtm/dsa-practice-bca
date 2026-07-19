#include <iostream>
#include <vector>
using namespace std;

void printArray(int i, int n, vector<int> &arr)
{
    if (i > n - 1)
    {
        return;
    }
    cout << arr[i] << " ";
    printArray(i + 1, n, arr);
}
int main()
{
    vector<int> arr = {5, 7, 1, 5, 2};
    int n = arr.size();
    printArray(0, n, arr);
    return 0;
}