// its time complexity is O(n3) and space complexity is O(1)
#include <iostream>
using namespace std;
bool fSum(int arr[], int n, int target);
int main()
{
    int arr[] = {1, 4, 2, 22, 43};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 48;
    fSum(arr, n, target);

    return 1;
}
bool fSum(int arr[], int n, int target)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << "founded";
                    return 1;
                }
            }
        }
    }
    return 0;
}