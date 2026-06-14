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
    int minFreq = n;
    int element = -1;
    for (const auto &it : mpp)
    {
        if (it.second < minFreq)
        {
            minFreq = it.second;
            element = it.first;
        }
    }

    cout << "Element with lowest frequency is " << element << " with frequency " << minFreq;
    return 0;
}