// find out the range of the target value in array the array is ascending order but in that may
//  be duplicate value 
// like array is arr[]={1,2,3,4,5,5,6,6,6,8}
// we want to range of the 6
// so result is  6 - 8
#include<iostream>
void binarySearch(int arr[],int n,int target);
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,5,6,6,6,8};
    int n=10;
    int target=6;
    binarySearch(arr,n,target);

    return 0;
}
void binarySearch(int arr[],int n,int target){
int start=0,end=n-1;
int mid;
int first=-1;
int last=-1;

// finding first element index
while (start<=end)
{
    mid=(start+end)/2;
    if(arr[mid]==target){
        first=mid;
        end=mid-1;
    }
    else if(target<arr[mid]){
        end=mid-1;
    }
    else{
        start = mid+1;
    }
}
// finding last element index of targeted element
start=0,end=n-1;
while (start<=end)
{
    mid=(start+end)/2;
    if(arr[mid]==target){
        last=mid;
        start=mid+1;
    }
    else if(target<arr[mid]){
        end=mid-1;
    }
    else{
        start = mid+1;
    }
}
cout<<"range of "<<target<<"is "<<first<<" "<<last;
}