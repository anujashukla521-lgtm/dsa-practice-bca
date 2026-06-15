#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int n = text.size();
    int left = 0;
    int right = n - 1;
    bool isPalindrome = true;
    while (left < right)
    {
        while (left < right && !isalnum(text[left]))
            left++;

        while (left < right && !isalnum(text[right]))
            right--;

        if (tolower(text[left] != tolower(text[right])))
        {
            isPalindrome = false;
            break;
        }

        left++;
        right--;
    }
    if (isPalindrome)
    {
        cout << text << " is palindrome";
    }
    else
    {
        cout << text << " is not palindrome";
    }
    return 0;
}