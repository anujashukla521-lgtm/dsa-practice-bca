#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string, vector<string>> mpp;

    for (int i = 0; i < words.size(); i++)
    {
        string temp = words[i];
        sort(temp.begin(), temp.end());
        mpp[temp].push_back(words[i]);
    }
    for (const auto &pair : mpp)
    {
        cout << pair.first << " -> ";
        for (const string &word : pair.second)
        {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}