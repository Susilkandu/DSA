// This program demonstrate selection sorting algorithm
// we are assuming our array have no repeated number

#include <iostream>
using namespace std;

// driver code
int main()
{
    int arr[1000];
    int n;
    printf("How many number you want to sort \t ");
    cin >> n;
    printf("Enter all the number \t");
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // via below code we are implementing selection sorting algorithm

    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
    // now our array has been sorted
    // via below code we are printing our sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\t';
    }
    return 0;
}
