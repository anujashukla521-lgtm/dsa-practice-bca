#include <iostream>
#include <unordered_map>
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
    int mapFreq = 0;
    int element = -1;
    for (const auto &it : mpp)
    {
        if (it.second > mapFreq)
        {
            mapFreq = it.second;
            element = it.first;
        }
    }

    cout << "Element with highest frequency is " << element << " with frequency " << mapFreq;
    return 0;
}