// Sort an Given array via bubble sort method
/*
bubble sort is a sorting algorithm where we do sorting like belwo
given unsorted array is arr[]={55,4,1,3,2}
manual solving :-

**round 1
    55  4   1   3   2
    4   55  1   3   2
    4   1   55  3   2
    4   1   3   55  2
    4   1   3   2   55

**round 2
    4   1   3   2   55
    1   4   3   2   55
    1   3   4   2   55
    1   3   2   4   55

**round 3
    1   3   2   4   55
    1   2   3   4   55
    now our array has been sorted
*/


// Driver code
#include <iostream>
using namespace std;
int main()
{
    // variable declaration
    int arr[10] = {55, 4, 1, 3, 2, 22, 33, 21, 44, 44};
    int arrSize = 10;
    // below code is sorting array by bubblesort algoritthm
    for (int i = arrSize - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // via below code we are showing the result
    cout << "Sorted array is \t";
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << '\t';
    }

    return 0;
}