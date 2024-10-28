// write a program to find maximum difference between two elements via brutforce approch
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 20, 9};
    int n = 6;
    int maxdiff = 0;
    int maxel = arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j + 1] > arr[j])
            {
                maxel = arr[j + 1];
            }
        }
        int diff = maxel - arr[i];
        maxdiff=max(diff,maxdiff);
    }
    cout << maxdiff;
    return 0;
}
