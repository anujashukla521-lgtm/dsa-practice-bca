#include <iostream>
using namespace std;

int main()
{
    string s = "listen";
    string t = "silentt";

    int freq[256] = {0};
    if (s.length() != t.length())
    {
        cout << "Not Anagram";
        return 0;
    }
    for (size_t i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
    }
    for (size_t i = 0; i < t.size(); i++)
    {
        freq[t[i]]--;
    }

    for (size_t i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            cout << "Not Anagram";
            return 0;
        }
    }
    cout << "Anagram";
    return 0;
}