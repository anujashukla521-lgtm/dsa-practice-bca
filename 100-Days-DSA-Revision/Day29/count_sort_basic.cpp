#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void count_sort(vector<int> &arr)
{
    int max_element = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        max_element = max(max_element, arr[i]);
    }
    vector<int> count(max_element + 1);

    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
    }
    int countIndex = 0;
    int arrayIndex = 0;
    while (countIndex <= max_element)
    {
        if (count[countIndex] > 0)
        {
            arr[arrayIndex] = countIndex;
            count[countIndex]--;
            arrayIndex++;
        }
        else
        {
            countIndex++;
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
    vector<int> arr = {7, 8, 1, 4, 3, 2, 2};
    display(arr);
    count_sort(arr);
    display(arr);
    return 0;
}