#include <iostream>
using namespace std;
int threeSum(int arr[], int n);
int main()
{
    int arr[] = {5, 3, 2, 15, 55, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << threeSum(arr, n);

    return 0;
}
int threeSum(int arr[], int n)
{
    // first sort array bubble sort
    for (int j = n - 1; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    int target = 75;
    for (int i = 0; i < n - 1; i++)
    {
        int ans = target - arr[i];
        int start = i + 1, end = n - 1;
        while (start < end)
        {
            if (arr[start] + arr[end] == ans)
            {
                return 1;
            }
            else if (arr[start] + arr[end] > ans)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
    }

    return 0;
}