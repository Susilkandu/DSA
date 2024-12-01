#include <iostream>
using namespace std;
int partion(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}
void quickSort(int arr[], int start, int end)
{
    if (start > end)
    {
        return;
    }
    int pi = partion(arr, start, end);

    quickSort(arr, start, pi - 1);
    quickSort(arr, pi + 1, end);
}
int main()
{
    int arr[]={1,2,3,4,5,4,4,3,2,1,1,233,33,22,31};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}