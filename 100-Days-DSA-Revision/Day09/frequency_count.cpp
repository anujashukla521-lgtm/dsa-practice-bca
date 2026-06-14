#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter num of elements: ";
    cin >> n;
    unordered_map<int, int> mpp;

    cout << "Enter numbers: ";
    for (size_t i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        mpp[number]++;
    }
    int query;
    cout << "Enter query: ";
    cin >> query;

    while (query--)
    {
        int num;
        cout << "Enter number to count frequency: ";
        cin >> num;
        cout << mpp[num] << endl;
    }
    // iterate in the map
    for (const auto &it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}