#include <iostream>
using namespace std;
int trapWater(int height[], int n);
int main()
{
    int height[] = {5,4,3,6,2,3,1};
    int n = sizeof(height) / sizeof(height[0]);
    int water = trapWater(height, n);
    cout<<water<<" Unit of water can trap";
    return 0;
}

int trapWater(int height[],int n){
    int max=height[0],index=0,water=0;
    // finding max element and that index
    for(int i=1;i<n;i++){
        if(height[i]>max){
            max=height[i];
            index=i;
        }
    }
    // adding max left side water unit
    int leftMax=height[0];
    for(int i=0;i<index;i++){
        if(leftMax>height[i]){
        water+=leftMax-height[i];
        }else{
            leftMax=height[i];
        }
    }
    // adding water unit before last building height less and after max height
    int rightMax=height[n-1];
    for(int i=n-1;i>index;i--){
        if(rightMax>height[i]){
        water+=rightMax-height[i];
        }else{
            rightMax=height[i];
        }
    }
    return water;
}