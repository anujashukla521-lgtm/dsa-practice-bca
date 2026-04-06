// Implementation of Insertion Sort in C++ demonstrating how elements are sorted by placing each element at its correct position in a sorted subarray. The program prints the array before and after sorting, highlighting the working of the algorithm.

#include <iostream>
using namespace std;

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *a, int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main()
{
    int a[] = {61, 45, 87, 12, 43, 34};
    int n = 6;
    display(a, n);
    insertionSort(a, n);
    display(a, n);
    return 0;
}