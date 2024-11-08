/*
store two number in a single element
and number is from 1 to 99
num =7
sNum = 4
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int num, occurence;
    cout << "Enter the number that you want to store \t";
    cin >> num;
    cout << "Enter the occurence \t";
    cin >> occurence;

    int number = num + (occurence * 100);
    cout << "number is " << number % 100 << " occurenc" << number / 100;
    
    return 0;
}
