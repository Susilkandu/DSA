// in this file we will learn how to create the 2d array via help of the pointer
#include <iostream>
using namespace std;
int main()
{
    int **ptr = new int *[5];
    for(int i=0;i<5;i++)
    ptr[i]=new int[5];

    for(int i =0;i<5;i++)
    for(int j =0;j<5;j++)
    ptr[i][j]=i+j;



    for(int i =0;i<5;i++)
    cout<<ptr[i]<<endl;
    return 0;
}