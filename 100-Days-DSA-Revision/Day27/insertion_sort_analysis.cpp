#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    int n = arr.size();
    int comparisons = 0, shifts = 0;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            comparisons++;
            if (arr[j] > key)
            {
                arr[j + 1] = arr[j];
                shifts++;
                j--;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = key;
    }
    cout << "Total comparisons: " << comparisons << endl;
    cout << "Total shifts: " << shifts << endl;
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
    vector<int> arr = {8, 12, 9, 0, 3, 6, 7, 14, 21, 19};
    display(arr);
    insertion_sort(arr);
    display(arr);
    return 0;
}