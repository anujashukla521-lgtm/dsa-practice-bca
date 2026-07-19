#include <iostream>
using namespace std;

string removeCharacter(const string &s, int index, char target)
{
    if (index == s.size())
    {
        return "";
    }
    if (s[index] == target)
    {
        return removeCharacter(s, index + 1, target);
    }

    return s[index] + removeCharacter(s, index + 1, target);
}
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    char target;
    cout << "Enter target: ";
    cin >> target;
    cout << removeCharacter(str, 0, target);
    return 0;
}