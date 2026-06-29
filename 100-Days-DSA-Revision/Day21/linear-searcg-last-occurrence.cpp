#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(const vector<int> &arr, int target)
{
    int index = -1;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (target == arr[i])
        {
            index = i;
        }
    }
    return index;
}
int main()
{
    vector<int> arr = {1, 7, 5, 8, 1, 3, 4, 7, 6, 1};
    int target;
    cout << "Enter element to search: ";
    cin >> target;
    int index = lastOccurrence(arr, target);
    if (index != -1)
    {
        cout << "Last occurrence at index: " << index;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}