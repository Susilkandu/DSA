// program of the segregate 0 and 1
#include <iostream>
using namespace std;
int main() {
 int arr[]={1,0,0,1,0,0,1,0,0};
 int size = sizeof(arr)/sizeof(arr[0]);
 int start = 0;
 int end = size-1;
 for(int i=0;i<size;i++){
     if(arr[start]==0){
         start++;
     }else{
         if(arr[end]==1){
             end--;
         }else{
             std::swap(arr[start],arr[end]);
         }
     }
 }
 cout<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}