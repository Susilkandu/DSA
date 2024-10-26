// to find sum of two elements 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
int arr[]={1,2,3,4,5,6,7,8,9,10};
int target = 3;
int size = sizeof(arr)/sizeof(arr[0]);
int start = 0,end=size-1;
bool founded=0;
while(start<end){
    if(arr[start]+arr[end]==target){
        cout<<arr[start]<<"+"<<arr[end]<<" = "<<target;
        founded==1;
        return 1;
    }
    else if(arr[start]+arr[end]>target){
        end--;
    }
    else{
        start++;
    }
}
if(founded==0)
cout<<"Not available combination of sum of two elements";
    return 0;
}
