#include <iostream>
using namespace std;
bool fourSum(int arr[], int n, int target);
int main()
{
    int arr[] = {5, 3, 0, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 11;
    fourSum(arr, n, target);
    return 1;
}
bool fourSum(int arr[], int n, int target)
{
    // sort via bubble sort
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n - 3; i++)
    {
        int ans = target - arr[i];
        int start = i+1, end=n-1;
        while (start<end)
        {
            if(ans)
        }
    }

    return 0;
}