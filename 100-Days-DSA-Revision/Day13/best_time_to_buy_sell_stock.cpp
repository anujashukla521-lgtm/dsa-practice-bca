#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    if (arr.empty())
    {
        cout << 0;
        return 0;
    }

    int minimum_price = arr[0];
    int maximum_profit = 0;
    for (size_t i = 1; i < arr.size(); i++)
    {
        int current_price = arr[i];
        if (minimum_price > current_price)
        {
            minimum_price = current_price;
        }
        int profit = current_price - minimum_price;
        if (maximum_profit < profit)
        {
            maximum_profit = profit;
        }
    }
    cout << "Maximum profit: " << maximum_profit;
    return 0;
}