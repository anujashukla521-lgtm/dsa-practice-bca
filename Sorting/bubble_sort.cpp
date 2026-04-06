// Implementation of Bubble Sort in C++ with an optimized approach using a flag to detect already sorted arrays. The program displays the array before and after sorting, demonstrating basic sorting logic and pointer usage.

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
void bubbleSort(int *a, int n)
{
    int isSorted;
    for (int i = 0; i < n - 1; i++)
    {
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted = 0;
            }
        }
    }
    if (isSorted)
        return;
}
int main()
{
    int a[] = {56, 23, 87, 12, 32};
    int n = 5;
    display(a, n);
    bubbleSort(a, n);
    display(a, n);
    return 0;
}