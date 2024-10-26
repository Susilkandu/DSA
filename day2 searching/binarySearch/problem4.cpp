// given array is arr[]={1,3,4,5,6,9,11,23}
// so tell me on which 
#include<iostream>
using namespace std;
int main()
{

int arr[8]={1,3,4,5,6,9,11,23};
int n=8;
int start = 0;
int end = n-1;
int mid;
int target = 88,index=end;
while(start<=end){
    mid=(start+end)/2;
    if(arr[mid]==target){
        index=mid;
        break;
    }
    else if(target<arr[mid]){
        index=mid;
        end = mid-1;
    }
    else{
        start=mid+1;
    }
   
}
 cout<<target<<"will on Index no."<<index;

    return 0;
}