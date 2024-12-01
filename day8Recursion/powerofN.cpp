#include <iostream>
using namespace std;
int powerOfN(int n, int e)
{
    if (e == 0)
    {
        return 1;
    }
    return n * powerOfN(n, e - 1);
}
int main()
{
    cout << powerOfN(5, 5);

    return 1;
}