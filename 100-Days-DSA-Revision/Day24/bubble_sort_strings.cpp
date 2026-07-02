#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void display(vector<string> &words)
{
    for (string c : words)
    {
        cout << c << " ";
    }
    cout << endl;
}

void bubble_sort(vector<string> &words)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        bool swapped = false;
        for (int j = 0; j <= i - 1; j++)
        {
            if (words[j] > words[j + 1])
            {
                swap(words[j], words[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}
int main()
{
    vector<string> words = {"harry", "ron", "draco", "luna", "hagrid", "sirius"};

    display(words);

    bubble_sort(words);
    display(words);
    return 0;
}
