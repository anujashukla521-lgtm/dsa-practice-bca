#include <iostream>
#include <vector>
using namespace std;

void subsequences(string &s, int index, string &curr, vector<string> &ans)
{
    if (index == s.size())
    {
        ans.push_back(curr);
        return;
    }
    curr.push_back(s[index]);
    subsequences(s, index + 1, curr, ans);
    curr.pop_back();
    subsequences(s, index + 1, curr, ans);
}
int main()
{
    string s = "abc";

    string curr;
    vector<string> ans;

    subsequences(s, 0, curr, ans);

    for (string n : ans)
    {
        cout << "{ ";
        cout << n << " ";

        cout << "}\n";
    }

    return 0;
}