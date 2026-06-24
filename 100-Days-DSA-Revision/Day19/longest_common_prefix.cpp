#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &words)
{
    if (words.empty())
    {
        return "";
    }
    string prefix = "";
    for (size_t j = 0; j < words[0].size(); j++)
    {
        char currentChar = words[0][j];
        bool match = true;
        for (size_t i = 1; i < words.size(); i++)
        {
            if (j >= words[i].size() || words[i][j] != currentChar)
            {
                match = false;
                break;
            }
        }
        if (!match)
        {
            break;
        }
        prefix += currentChar;
    }
    return prefix;
}
int main()
{
    vector<string> words = {"anuja", "add", "bug"};
    cout << longestCommonPrefix(words);
    return 0;
}