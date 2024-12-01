// take out the sum of n number via help of recursion
#include <iostream>
using namespace std;
int sumOfN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumOfN(n-1);
}
int main()
{

    cout << sumOfN(5);
    return 0;
}