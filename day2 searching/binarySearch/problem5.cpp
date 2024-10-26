// program to find out nearest square root of the x like x have 83 value so give the result 9
#include <iostream>
using namespace std;
int main() {
    int x=100;
    int start=0;
    int end = x-1;
    int mid,index;
    while(start<=end){
        mid=(start+end)/2;
        if(x<2){
            break;
        }
        if(mid*mid==x){
            index=mid;
            break;
        }
        else if(mid*mid<x){
            index=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<"nearest square root of the "<<x<<"is"<<index;

    return 0;
}