#include <iostream>
using namespace std;

void printNum(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    printNum(i - 1, n);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    printNum(n, n);
    return 0;
}