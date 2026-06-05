#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {7, 9, 12, 43, 54, 23};
    int maximum = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (maximum < arr[i])
        {
            maximum = arr[i];
        }
    }
    cout << "Maximum element: " << maximum;
    return 0;
}
