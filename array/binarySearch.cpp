#include<iostream>
using namespace std;
int binarySearch(int num[],int size,int elem){
    int low, mid, high;
    low=0;
    high=size-1;
    mid=(low+high)/2;
    while (low<=high)
    {
        mid = (low+high)/2;
        if(num[mid]==elem){
            cout<<"founded on "<<mid;
            return mid;
        }
        else if(num[mid]<elem){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int num[] = {2,3,4,5,6,7,8,9,22,44};
    int size = sizeof(num)/sizeof(int);
    int elem = 0;
    int s= binarySearch(num,size,elem);
    cout<<"hello"<<endl;
    cout<<s;
    return 0;
}