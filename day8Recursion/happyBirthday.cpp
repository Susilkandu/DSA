#include <iostream>
using namespace std;
void happyBirthday(int n)
{
    if (n == 0)
    {
        cout << "Finally Happy Birthday" << endl;
        return;
    }
    cout << n << " days before happy birthday" << endl;
    happyBirthday(n - 1);
}
int main()
{
    happyBirthday(30);
    return 0;
}