#include<iostream>
using namespace std;
int main()
{
int a=2;
int b = a++ + ++a + a++;
cout<<a<<b;

    return 1;
}