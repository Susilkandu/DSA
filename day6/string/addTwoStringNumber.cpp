#include <iostream>
#include<algorithm>
using namespace std;
void addTwoStringNum(string str1, string str2);
int main()
{
    string str1 = "580";
    string str2 = "70";
    if (str1.length() < str2.length())
    {
        addTwoStringNum(str2, str1);
    }
    else
    {
        addTwoStringNum(str1, str2);
    }
    return 0;
}
void addTwoStringNum(string str1, string str2)
{
    string ans;
    int carry = 0;
    int indexS2 = str2.size() - 1; // str2 last index
    int indexS1 = str1.size() - 1; // str1 last index
    while (indexS2 >= 0)
    {
        int digit1 = (indexS1 >= 0) ? (str1[indexS1] - '0') : 0;
        int digit2 = str2[indexS2] - '0';
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans += (sum + '0');
        indexS1--;
        indexS2--;
    }
    while (indexS1 >= 0)
    {
        int digit1 = str1[indexS1] - '0';
        int sum = digit1 + carry;
        int carry = sum / 10;
        sum = sum % 10;
        ans += (sum + '0');
        indexS1--;
    }
    // reverse the result since we added digits form least significant to most significant
    reverse(ans.begin(), ans.end());
    cout << ans << endl; // output will be print
}