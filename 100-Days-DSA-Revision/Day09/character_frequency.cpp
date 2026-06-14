#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;
    unordered_map<char, int> mpp;

    for (size_t i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    int query;
    cout << "Enter query: ";
    cin >> query;

    while (query--)
    {
        char ch;
        cout << "Enter character to count frequency: ";
        cin >> ch;
        cout << mpp[ch] << endl;
    }
    // iterate in the map
    for (const auto &it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}