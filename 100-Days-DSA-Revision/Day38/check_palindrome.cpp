#include <iostream>
using namespace std;

bool check(const string &s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (s[start] != s[end])
    {
        return false;
    }
    return check(s, start + 1, end - 1);
}
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int n = s.length();
    cout << check(s, 0, n - 1);
    return 0;
}