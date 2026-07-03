#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selection_sort(vector<int> &arr)
{
    int n = arr.size();
    int comparisons = 0;
    int swaps = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            comparisons++;
        }
        if (minIndex != i)
        {

            swap(arr[i], arr[minIndex]);
            swaps++;
        }
    }
    cout << "Total comparisons: " << comparisons << endl;
    cout << "Total swaps: " << swaps << endl;
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
    vector<int> arr = {1, 2, 3, 4, 5};

    display(arr);
    selection_sort(arr);
    display(arr);
    return 0;
}