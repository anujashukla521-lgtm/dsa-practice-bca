#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> answer;
    for (int i = 0; i < n; i++)
    {
        if (answer.empty() || intervals[i][0] > answer.back()[1])
        {
            answer.push_back(intervals[i]);
        }
        else
        {
            answer.back()[1] = max(answer.back()[1], intervals[i][1]);
        }
    }
    return answer;
}
int main()
{
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 9}, {9, 11}, {8, 10}, {2, 4}, {15, 18}, {16, 17}};
    vector<vector<int>> merged_arr = mergeIntervals(arr);
    for (const auto &interval : merged_arr)
    {
        cout << "[" << interval[0] << "," << interval[1] << "]\n";
    }
    return 0;
}
