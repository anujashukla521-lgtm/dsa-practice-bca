#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "abcabcbb";

    unordered_map<char, int> mpp;

    int left = 0;
    int maxLen = 0;

    for (int right = 0; right < s.size(); right++)
    {
        mpp[s[right]]++;

        while (mpp[s[right]] > 1)
        {
            mpp[s[left]]--;
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }
    cout << maxLen;
    return 0;
}