#include <iostream>
using namespace std;

void even_num(int i, int n)
{
    if (i > n)
    {
        return;
    }
    if (i % 2 == 0)
    {
        cout << i << " ";
    }
    even_num(i + 1, n);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    even_num(2, n);
    return 0;
}