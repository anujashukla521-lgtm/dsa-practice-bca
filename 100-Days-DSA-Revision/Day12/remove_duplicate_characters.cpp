#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "programming";
    string result = "";
    unordered_map<char, int> mpp;
    for (char ch : s)
    {
        if (mpp[ch] == 0)
        {
            result += ch;
        }
        mpp[ch]++;
    }
    cout << result;
    return 0;
}