#include <iostream>
using namespace std;

string compressString(const string &text)
{
    if (text.empty())
    {
        return "";
    }

    char currentChar = text[0];
    int count = 1;
    string compressedString = "";
    for (int i = 1; i < text.size(); i++)
    {
        if (text[i] == currentChar)
        {
            count++;
        }
        else
        {
            compressedString += string(1, currentChar) + to_string(count);
            currentChar = text[i];
            count = 1;
        }
    }

    compressedString += string(1, currentChar) + to_string(count);
    if (text.length() > compressedString.length())
    {
        return compressedString;
    }
    else
    {
        return text;
    }
}
int main()
{
    string text = "abcd";
    cout << compressString(text);
    return 0;
}