#include <iostream>
using namespace std;

void decimal_to_binary(int n)
{
    if (n == 0)
    {
        cout << 0;
        return;
    }
    if (n == 1)
    {
        cout << 1;
        return;
    }
    decimal_to_binary(n / 2);
    cout << n % 2;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    decimal_to_binary(n);
    return 0;
}