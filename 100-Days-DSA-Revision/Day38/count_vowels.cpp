#include <iostream>
using namespace std;

int countVowels(const string &s, int index)
{
    if (index == s.size())
    {
        return 0;
    }
    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' ||
        s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U')
    {

        return 1 + countVowels(s, index + 1);
    }
    return countVowels(s, index + 1);
}
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Number of vowels: " << countVowels(str, 0);
    return 0;
}