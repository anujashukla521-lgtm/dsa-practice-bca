#include <iostream>
#include <vector>
using namespace std;

void remove_duplicates(vector<int> &arr)
{
    if (arr.empty())
    {
        return;
    }

    cout << arr[0] << " ";
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            cout << arr[i] << " ";
        }
    }
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
    vector<int> arr = {1, 2, 2, 3, 3, 4, 5, 5};
    display(arr);
    remove_duplicates(arr);
    return 0;
}