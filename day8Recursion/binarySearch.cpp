#include<iostream>
using namespace std;
bool binarySearch(int arr[],int tgt,int start, int end){
    if(start>=end){
        return 0;
    }
    int mid = (start)+(end-start)/2;
    if(arr[mid]==tgt){
        return 1;
    }
    else if(tgt>arr[mid]){
        return binarySearch(arr,tgt,mid+1,end);
    }else{
        return binarySearch(arr,tgt,start,mid-1);
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int end = sizeof(arr)/sizeof(arr[0])-1;
    int tgt = 3;
    cout<<binarySearch(arr,tgt,0,end);

    return 0;
}