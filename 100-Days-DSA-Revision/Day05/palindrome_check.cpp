#include <iostream>
using namespace std;

int main()
{
    string text = "WOW";
    int n = text.size();
    int left = 0;
    int right = n - 1;
    bool isPalindrome = true;
    while (left < right)
    {
        if (text[left] != text[right])
        {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
    return 0;
}