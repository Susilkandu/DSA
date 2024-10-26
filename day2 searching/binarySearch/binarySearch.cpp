// binary Search
// it is used on sorted array to find search some element
// its time complexity is O(n)

#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int target);
int main()
{
int arr[5]={1,2,3,4,5};
int n=5;
int target=4;
int index = binarySearch(arr,n,target);
if(index==-1){
    cout<<target<<"is not found"<<endl;
}else{
    cout<<target<<"is on index no."<<index;
}

    return 0;
}

int binarySearch(int arr[],int n, int target){
    int start = 0;
    int end =n-1;
    int mid=(start+end)/2;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return-1;
}