// find out element from the array the array is in the descending order
// given aray is arr[]={9,6,4,3,2,1,0}
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int target);
int main()
{
int arr[5]={5,4,3,2,1};
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
        else if(target>arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return-1;
}