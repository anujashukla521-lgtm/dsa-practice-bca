#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "listen";
    string t = "silent";

    if (s.length() != t.length())
    {
        cout << "Not anagram";
        return 0;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
        cout
            << "Anagram";
    else
        cout << "Not Anagram";
    return 0;
}