#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}
void display(const vector<int> &arr)
{
    for (int n : arr)
    {
        cout << n << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {9, 4, 8, 1, 7, 0, 2, -6, 12, 25};
    display(arr);
    insertion_sort(arr);
    display(arr);
    return 0;
}