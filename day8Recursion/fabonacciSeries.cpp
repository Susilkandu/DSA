#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int terms = 6; // You can change this to print more terms

    cout << "Fibonacci Series: ";

    for (int i = 0; i < terms; i++) {

        cout << fibonacci(i) << "\t";

    }
return 0;
}