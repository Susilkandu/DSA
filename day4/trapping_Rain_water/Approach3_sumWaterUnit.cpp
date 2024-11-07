
// It use two pointer algorithm
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int trapWater(vector<int> &height);
int main()
{
    vector<int> height = {5,4,3,6,2,3,1};
    cout<<trapWater(height);
    return 0;
}
int trapWater(vector<int> &height)
{
    int n = height.size();
    int start = 0, end = n - 1, leftMax = 0, rightMax = 0, water = 0;

    while (start < end)
    {
        if (leftMax < height[start])
        {
            leftMax = height[start];
        }
        else
        {
            water += leftMax - height[start];
        }
        start++;
        if (rightMax < height[end])
        {
            rightMax = height[end];
        }
        else
        {
            water += rightMax - height[end];
        }
        end--;
    }

    return water;
}