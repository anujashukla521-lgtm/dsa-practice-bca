#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selection_sort(vector<string> &words)
{
    int n = words.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (words[j] < words[minIndex])
            {
                minIndex = j;
            }
        }
        swap(words[i], words[minIndex]);
    }
}

void display(const vector<string> &words)
{
    for (string n : words)
    {
        cout << n << " ";
    }
    cout << endl;
}
int main()
{
    vector<string> words = {"box", "table", "fan", "laptop", "code", "python"};

    display(words);
    selection_sort(words);
    display(words);
    return 0;
}