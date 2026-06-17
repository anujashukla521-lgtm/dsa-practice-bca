#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "leetcode";
    unordered_map<char, int> mpp;

    for (size_t i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    bool found = false;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (mpp[s[i]] == 1)
        {
            cout << s[i];
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "No non-repeating character";
    }

    return 0;
}