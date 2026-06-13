#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string text = "Programming";
    int left = 0;
    int right = text.size() - 1;
    while (left < right)
    {
        swap(text[left], text[right]);
        left++;
        right--;
    }
    cout << text;
    return 0;
}