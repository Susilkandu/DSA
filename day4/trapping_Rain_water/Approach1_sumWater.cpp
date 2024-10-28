/* write a program to store sum of the rain water unit can trap in a given height
 it's approach time complexity is O(n) and space complexity is O(n) also
 so in approach to will will make another its optimize verision with O(1) in space complexity and in O(n) time complexity
*/
#include<iostream>
using namespace std;
int trapWater(int height[],int n);
int main()
{
    int height[]={1,4,3,6,2,3,1};
    int n = sizeof(height)/sizeof(height[0]);

    trapWater(height,n);
    return 0;
}
int trapWater(int height[],int n){
int leftMax[n],rightMax[n],water=0;
// finding left max;
leftMax[0]=height[0];
for(int i=1;i<n;i++){
    leftMax[i]=max(height[i-1],leftMax[i-1]);
}
// storing all right max
rightMax[n-1]=0;
for(int i=n-2;i>0;i--){
rightMax[i]=max(rightMax[i+1],height[i]);
}
//adding sum of unit water
int minHeight=0;
for(int i=0;i<n;i++){
minHeight = min(leftMax[i],rightMax[i]);
if(minHeight>height[i]){
    water+= minHeight-height[i];
}
}

cout<<water<<" unit of water can trap";
return water;
}