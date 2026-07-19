#include <iostream>
#include <vector>
using namespace std;

int sum_of_array(int i, int n, vector<int> &arr)
{
    if (i > n - 1)
    {
        return 0;
    }
    return arr[i] + sum_of_array(i + 1, n, arr);
}
int main()
{
    vector<int> arr = {5, 7, 1, 5, 2};
    int n = arr.size();
    cout << "Sum of elements: " << sum_of_array(0, n, arr);
    return 0;
}