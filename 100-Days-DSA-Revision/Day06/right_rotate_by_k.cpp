#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int left, int right)
{
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main()
{
    vector<int> arr = {7, 9, 3, 0, -5, 12, 5};
    int n = arr.size();
    int k;
    cout << "Enter k: ";
    cin >> k;
    k = k % n;
    if (k == 0)
    {
        for (int num : arr)
        {
            cout << num << " ";
        }
        return 0;
    }

    reverseArray(arr, 0, n - k - 1);
    reverseArray(arr, n - k, n - 1);
    reverseArray(arr, 0, n - 1);

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}