/* **problem 6 of binary Search
 find out the minimum element from the give array 
 array is arr[] ={7,8,9,10,6,5,4,3,2}
 this is rotated array
 answer should be 2 . and yes try to implement with the binary Search algorithm */
#include <iostream>
using namespace std;
int main() {
    int arr[] ={7,8,9,10,6,5,4,3,2};
    int n = 9;
    int start=0;
    int end = n-1;
    int mid=(start+end)/2;
    int minimum;
    
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            minimum=arr[mid];
            start=mid+1;
        }
    }
    cout<<"minimum element is"<<minimum;

    return 0;
}