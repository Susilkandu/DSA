/*
sort an arrray in increasing order but start from the last
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {9, 8, 7, 6};
    int n = 4;

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            else{
                break;
            }
        }
    }

// printing the sorted array
    cout<<"sorted array is :- \t";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}