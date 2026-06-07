#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, l, r;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter l and r: ";
    cin >> l >> r;

    vector<int> arr(n);

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 0)
    {
        return 0;
    }

    vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int answer;
    if (l == 0)
    {
        answer = prefix[r];
    }
    else
    {
        answer = prefix[r] - prefix[l - 1];
    }

    cout << "\nPrefix sum array" << endl;
    for (int num : prefix)
    {
        cout << num << " ";
    }
    cout << "\n"<<answer;
    return 0;
}