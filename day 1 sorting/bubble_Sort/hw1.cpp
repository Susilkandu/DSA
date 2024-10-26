// Sort an Give array in Descending order

/*
given unsorted array is arr[]={45,43,55,1,64,99}
*/
// Driver code
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {6,5,4,3,2,1};
    int arrSize = 6;
    // via below code we are sorting this array by bubble sort in decreasing order
    for (int i = arrSize - 1; i >= 0; i--)
    {
        bool swapped = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
// via below code we printing the sorted array
cout<<"Sorted Array is :\t";
for(int i=0;i<arrSize;i++){
    cout<<arr[i]<<"\t";
}
    return 0;
}