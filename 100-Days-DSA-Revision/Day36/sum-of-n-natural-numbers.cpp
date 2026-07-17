#include <iostream>
using namespace std;

int total(int n)
{
    if (n == 0)
        return 0;

    return n + total(n - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << total(n);

    return 0;
}