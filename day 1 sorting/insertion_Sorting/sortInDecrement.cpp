/*
Write a Program via implementation of the Insertion Sorting algorithm and sort an array in descending order
*/

#include<iostream>
using namespace std;
int main(){
int arr[4] = {1,2,3,4};
    int n = 4;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >0; j--)
        {
            if (arr[j] > arr[j-1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }

// via below code we are printing the sorted array in descending order
for(int i=0;i<n;i++){
    cout<<arr[i]<<"\t";
}



return 0;
}