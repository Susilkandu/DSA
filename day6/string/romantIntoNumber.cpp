#include <iostream>
#include <vector>
using namespace std;
int decode(char ch);
void ChngRomanIntoNum(string &roman);
int main()
{
    string str = "DCC";
    ChngRomanIntoNum(str);
    return 0;
}
int decode(char ch)
{
    int value;
    switch (ch)
    {
    case 'I':
        value = 1;
        break;
    case 'V':
        value = 5;
        break;
    case 'X':
        value = 10;
        break;
    case 'L':
        value = 50;
        break;
    case 'C':
        value = 100;
        break;
    case 'D':
        value = 500;
        break;
    case 'M':
        value = 1000;
        break;
    default:
        value = 0;
        break;
    }
    return value;
}

void ChngRomanIntoNum(string &roman)
{
    int ans = 0;
    int n = roman.size();
    for (int i = 0; i < n - 1; i++)
    {
        int currentVal = decode(roman[i]);
        int nextVal = decode(roman[i + 1]);
        // Check if current value is less than nex value
        if (currentVal < nextVal)
        {
            ans -= currentVal;
        }
        else
        {
            ans += currentVal;
        }
    }
    // Add the last character's value
    ans+=decode(roman[n-1]);
    cout<<ans;
}