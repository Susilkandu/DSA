#include<iostream>
using namespace std;
int main(){
// int *ptr = new int;
// *ptr = 4;
// cout<<*ptr<<endl;
// cout<<ptr<<endl;
// cout<<sizeof(ptr);
// delete ptr;

int *p = new int[5];
for(int i =0 ;i<5;i++)
p[i]=i+1;


for(int i =0 ;i<5;i++)
cout<<sizeof(*p);
    return 0;
}