/*
Given a string s, find the length of the longest substring without repeating characters.
Example:

For the input string "abcabcbb", the longest substring without repeating characters is "abc", which its length is 3.

For the input string "bbbbb", the longest substring without repeating characters is "b", which its length is 1.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int calculateLength(string str);
int main()
{
    string str = "abcdefaagah";
    calculateLength(str);
    return 0;
}
int calculateLength(string str)
{
    int i = 0, len = 0, first = 0, second = 0;
    vector<int> count(256, 0);
    for (i = 0; i < str.size(); i++)
    {
        if (count[str[second]] == 0)
        {
            len = max(len, second - first + 1);
            count[str[second]]++;
            second++;
        }
        else
        {
            while (count[str[second]])
            {
                if (str[first] == str[second])
                {
                    count[str[second]]--;
                    first++;
                }
                else
                {
                    first++;
                }
            }
            count[str[second]]++;
            second++;
        }
    }
    cout << len;
    return len;
}