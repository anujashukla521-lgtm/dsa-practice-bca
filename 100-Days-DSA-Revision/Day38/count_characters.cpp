#include <iostream>
using namespace std;

int count(const string &s, int index)
{
    if (index == s.size())
    {
        return 0;
    }
    return 1 + count(s, index + 1);
}
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Number of characters: " << count(str, 0);
    return 0;
}