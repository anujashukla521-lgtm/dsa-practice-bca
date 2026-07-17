#include <iostream>
using namespace std;

void odd_num(int i, int n)
{
    if (i > n)
    {
        return;
    }
    if (i % 2 != 0)
    {
        cout << i << " ";
    }
    odd_num(i + 1, n);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    odd_num(1, n);
    return 0;
}