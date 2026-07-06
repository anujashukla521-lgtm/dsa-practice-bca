#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(arr, low, high);
        quick_sort(arr, low, partitionIndex - 1);
        quick_sort(arr, partitionIndex + 1, high);
    }
}
void quickSort(vector<int> &arr)
{
    int n = arr.size();
    quick_sort(arr, 0, n - 1);
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
    vector<int> arr = {6, 9, 1, 4, 12, 5, 7, 0, 15, 8};
    cout << "Original array: ";
    display(arr);
    quickSort(arr);
    cout << "Sorted array: ";
    display(arr);
}