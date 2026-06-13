#include <iostream>
using namespace std;

int main()
{
    string text = "MADAM";
    int left = 0;
    int right = text.size() - 1;
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