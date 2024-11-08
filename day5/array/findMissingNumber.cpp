/*
given array is :- 4 1 3 2
give array is between 1 to size-1
*/
#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,2,2,2,5};
    int arr2[5]={0,0,0,0,0};iip
    for(int i=0;i<5;i++){
        arr2[arr[i]-1]++;
    }
    for(int i=0;i<5;i++){
        if(arr2[i]==0){
            cout<<i+1<<" is misssing \n";
        }
        else if(arr2[i]>1){
            cout<<i+1<<"is repeated on "<<arr2[i]<<" times \n";
        }
    }
    
}