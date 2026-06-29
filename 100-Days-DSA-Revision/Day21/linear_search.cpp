#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int> &arr, int target)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {10, 34, 21, 54, -6, 12, 3, 2};
    int target;
    cout << "Enter element to search: ";
    cin >> target;
    int index = linearSearch(arr, target);
    if(index!=-1){
    cout << "Element found at index: " << index;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}