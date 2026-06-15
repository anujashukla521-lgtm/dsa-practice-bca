#include <iostream>
#include <cctype>
using namespace std;

bool check(string &s, int l, int r)
{
    while (l < r)
    {
        while (l < r && !isalnum(s[l]))
            l++;
        while (l < r && !isalnum(s[r]))
            r--;
        if (tolower(s[l]) != tolower(s[r]))
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
bool validPalindrome(string &s)
{
    int l = 0;
    int r = s.size() - 1;
    while (l < r)
    {
        if (tolower(s[l]) == tolower(s[r]))
        {
            l++, r--;
        }
        else
        {
            return check(s, l + 1, r) || check(s, l, r - 1);
        }
    }
    return true;
}
int main()
{
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    if (validPalindrome(text))
    {
        cout << "Valid palindrome";
    }
    else
    {
        cout << "Not a valid palindrome";
    }
    return 0;
}