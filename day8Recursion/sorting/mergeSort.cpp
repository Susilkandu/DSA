#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            temp[index++] = arr[right++];
        }
    }
    // right array is not empty
    while (right <= end)
    {
        temp[index++] = arr[right++];
    }
    // put these value in the array of the left if not empty
    while (left <= mid)
    {
        temp[index++] = arr[left++];
    }
    // Copy the sorted temp array back to the original array
    for (int i = 0; i < temp.size(); i++)
    {
        arr[start + i] = temp[i];
    }
}
void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        // left side
        mergeSort(arr, start, mid);
        // right side
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
int main()
{

    int arr[10] = {1, 2, 1, 4, 5, 2, 22, 11, 9, 10};
    mergeSort(arr, 0, 9);
    for (int i = 0; i <= 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}