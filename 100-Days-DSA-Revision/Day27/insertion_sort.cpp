#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void display(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {3, 8, 1, 9, 11, 5, 7, 10, 15, -2};
    display(arr);
    insertion_sort(arr);
    display(arr);
    return 0;
}