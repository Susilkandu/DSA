/* **problem 5 of binary Search
 find out the peek element from the give array 
 array is arr[] ={7,8,9,10,6,5,4,3,2}
 answer should be 10 . and yes try to implement with the binary Search algorithm */
#include <iostream>
using namespace std;
int main() {
    int arr[] ={7,8,9,10,6,5,4,3,2};
    int n = 9;
    int start=0;
    int end = n-1;
    int mid,peek=0;
    
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            peek=arr[mid];
            break;
        }
        else if(arr[mid-1]<arr[mid]){
            peek=arr[mid];
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<"peek element is"<<peek;

    return 0;
}