// sort an given array in ascending order but start from the last
/*
manual solving:-
        5   8   4
        5   4   8
        4   5   8
*/
// Driver Code

#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {5, 8, 4};
    int arrSize = 3;
    int count = 0;

    for (int i = arrSize - 1; i > 0; i--)
    {
        ++count;
        bool swapped = 0;
        for (int i = 0; i < arrSize; i++)
        {
            cout << arr[i] << '\t';
        }cout<<endl;
        for (int j = arrSize - 1; j >= 0; j--)
        {
            if (j == 0)
            {
                continue;
            }
            ++count;
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j - 1], arr[j]);
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }

    cout << "Sorted array is" << "s";
    // for (int i = 0; i < arrSize; i++)
    // {
    //     cout << arr[i] << '\t';
    // }
    cout << "Total round" << count;
    // Printing array

    return 0;
}