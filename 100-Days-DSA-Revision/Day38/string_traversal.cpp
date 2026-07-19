#include <iostream>
#include <vector>
using namespace std;

void traverse(const string &s, int index, int n)
{
    if (index == n)
    {
        return;
    }
    cout << s[index];
    traverse(s, index + 1, n);
}
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int n = s.length();
    traverse(s, 0, n);
    return 0;
}