// In insertion sorting algorithm we are inserting in left or right based on the condition while our array not be sort
/*
arr[]=5,35,2,1
we are sorting in ascending order
manual solving technique
1st round
        5   35  2   1
2nd round
        5   2   35  1
        2   5   35  1
3rd round
        2   5   1   35
        2   1   5   35
        1   2   5   35


*/
// Driver code
#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {5, 35, 2, 1};
    int n = 4;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >0; j--)
        {
            if (arr[j] < arr[j-1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }

    // below code are printing the sorted array
    cout << "Sorted array is \t";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<'\t';
    }
    return 0;
}