#include <iostream>
using namespace std;

bool isRotation(const string &s1, const string &s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    string doubled = s1 + s1;
    return doubled.find(s2) != string::npos;
}

int main()
{
    string s = "abcd";
    string t = "dcbad";

    cout << isRotation(s, t);
    return 0;
}