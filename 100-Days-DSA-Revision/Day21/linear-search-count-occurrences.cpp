#include <iostream>
#include <vector>
using namespace std;

int countOccurrences(const vector<int> &arr, int target)
{
    int count = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (target == arr[i])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> arr = {1, 4, 6, 1, 7, 3, 6, 1, 4, 2, 8, 1};
    int target;
    cout << "Enter element to search: ";
    cin >> target;
    int count = countOccurrences(arr, target);
    cout << target << " appears " << count << " times";

    return 0;
}