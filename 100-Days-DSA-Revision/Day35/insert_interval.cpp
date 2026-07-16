#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> insertIntervals(vector<vector<int>> &intervals, vector<int> &newInterval)
{

    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> answer;
    for (int i = 0; i < intervals.size(); i++)
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
    vector<vector<int>> arr = {{1, 2}, {3, 4}, {5, 7}, {8, 10}, {12, 16}};
    vector<int> newArr(2);

    cout << "Enter new interval: ";
    cin >> newArr[0] >> newArr[1];
    vector<vector<int>> ans = insertIntervals(arr, newArr);
    for (const auto &interval : ans)
    {
        cout << "[" << interval[0] << "," << interval[1] << "]\n";
    }
    return 0;
}