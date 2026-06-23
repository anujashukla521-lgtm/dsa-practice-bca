#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxWater(const vector<int> &height)
{
    int left = 0;
    int max_area = 0;
    int right = height.size() - 1;

    while (left < right)
    {
        int container_height = min(height[left], height[right]);
        int width = right - left;
        int area = container_height * width;
        max_area = max(area, max_area);

        if (height[left] < height[right])
        {

            left++;
        }
        else
        {
            right--;
        }
    }
    return max_area;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << maxWater(height);
    return 0;
}