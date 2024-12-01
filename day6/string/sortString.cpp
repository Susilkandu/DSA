/*
you have a given string str1="aekljaad"
after sorting your output will have be :- aaadejkl
*/
#include <iostream>
#include <vector>
using namespace std;
void sortString(string &str);
int main()
{
    string str = "jlaiokelkclkajekjdjkljeilkssaqnmopabcdefghijklmnopqrstuvwxyzaad";
    sortString(str);
    return 0;
}
void sortString(string &str)
{
    vector<int> alpha(26, 0);
    string ans;
    for (int i = 0; i < str.size(); i++)
    {
        alpha[str[i] - 'a'] ++;
    }
    for (int i = 0; i < alpha.size(); i++)
    {
        char c = i+'a';
            while (alpha[i])
        {
            ans += c;
            alpha[i]--;
        }
    }
    cout<<ans;
}