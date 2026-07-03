#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selection_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
    vector<int> arr = {23, 12, 9, 7, 11, 10, 4, 21, 5};

    display(arr);
    selection_sort(arr);
    display(arr);
    return 0;
}