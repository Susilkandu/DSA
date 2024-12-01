/*
you have given a sentence in a string in str1="a quick brown fox is running slowlly"
so give output 1 if that sentence have the all small letter of english
else 0
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void checkPanagram(string &str1);
int main()
{
    string str1 = "the quick brown fox A jumps over the lazy dog";
    checkPanagram(str1);
    return 0;
}
void checkPanagram(string &str1)
{
    vector<bool> alpha(26, 0);
    int i = 0;
    while (i < str1.size())
    {
        if (str1[i] >= 97 && str1[i] <= 122)
        {
            alpha[str1[i] - 'a'] = 1;
        }
        i++;
    }
    i = 0;
    while (i < alpha.size())
    {
        if (alpha[i] == 0)
        {
            cout<<0;
            return;
        }
        i++;
    }
    cout<<1;
}