// write a program to find the largest sum of the subArray of an array in a contiguous way
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMaxSum(vector<int> arr, int n);
int main()
{
    int n;
    cout << "how many elements you want to store";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // calling findMaxSum method
    cout << "Max is :- \t";
    cout << findMaxSum(arr, n);
    return 0;
}
int findMaxSum(vector<int> arr, int n)
{
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
    int prefix = 0;
        for (int j = i; j < n; j++)
        {
            prefix += arr[j];
            maxSum = max(prefix, maxSum);
        }
    }
    return maxSum;
}
