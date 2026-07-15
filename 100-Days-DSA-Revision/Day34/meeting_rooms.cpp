#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool meetingRooms(vector<vector<int>> &timings)
{
    sort(timings.begin(), timings.end());
    for (int i = 1; i < timings.size(); i++)
    {
        if (timings[i][0] < timings[i - 1][1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<vector<int>> arr = {{0, 30}, {5, 10}, {15, 20}};
    bool attend = meetingRooms(arr);
    cout << attend;
    return 0;
}