// A pointer is a variable that store memory address of the another variable
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a = 10;
    ptr = &a;
    cout<<*ptr<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    return 0;
}