#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> nonOverlapIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end(),
         [](const vector<int> &a, const vector<int> &b)
         {
             return a[1] < b[1];
         });
    vector<vector<int>> answer;
    for (int i = 0; i < intervals.size(); i++)
    {
        if (answer.empty() || intervals[i][0] >= answer.back()[1])
        {
            answer.push_back(intervals[i]);
        }
    }
    return answer;
}
int main()
{
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 9}, {9, 11}, {8, 10}, {2, 4}, {15, 18}, {16, 17}};
    vector<vector<int>> array = nonOverlapIntervals(arr);
    for (const auto &interval : array)
    {
        cout << "[" << interval[0] << "," << interval[1] << "]\n";
    }
    return 0;
}