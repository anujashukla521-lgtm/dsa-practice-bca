#include <iostream>
#include <vector>
using namespace std;

void solve(int i, int j, vector<vector<int>> &arr, int n, vector<string> &ans, string move, vector<vector<int>> &visited, int di[], int dj[])
{
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(move);
        return;
    }
    visited[i][j] = 1;
    string dir = "DLRU";
    for (int index = 0; index < 4; index++)
    {
        int nexti = i + di[index];
        int nextj = j + dj[index];
        if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !visited[nexti][nextj] && arr[nexti][nextj] == 1)
        {
            solve(nexti, nextj, arr, n, ans, move + dir[index], visited, di, dj);
        }
    }
    visited[i][j] = 0;
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    vector<vector<int>> visited(n, vector<int>(n, 0));
    int di[] = {+1, 0, 0, -1};
    int dj[] = {0, -1, 1, 0};
    if (m[0][0] == 1)
    {
        solve(0, 0, m, n, ans, "", visited, di, dj);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }

    vector<string> ans = findPath(maze, n);

    if (ans.empty())
    {
        cout << -1;
    }
    else
    {
        for (string path : ans)
        {
            cout << path << " ";
        }
    }

    return 0;
}
