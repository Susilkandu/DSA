// take out the sum of square of the n natuaral number
#include <iostream>
using namespace std;
int sumOfNSqure(int n)
{

    int sum = 0;
    if (n == 1)
    {
        return n;
    }
    return n * n + sumOfNSqure(n - 1);
}
int main()
{
    cout << sumOfNSqure(5);
    return 1;
}