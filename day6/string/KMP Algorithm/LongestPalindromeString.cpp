#include <iostream>
#include <iostream>
using namespace std;
void LongestPalindromeString(string str);
int main()
{
    string str = "npabRARbas";
    LongestPalindromeString(str);
    return 0;
}
void LongestPalindromeString(string str)
{
    int first = 0, end = str.size()-1;
    string ans;
    while (first <= end)
    {
        cout<<str[first]<<"\t"<<str[end]<<endl;
        if (str[first] == str[end])
        {
            ans += str[first];
            first++;
            end--;
        }
        else
        {
            first++;
            end--;
            // ans.clear();
        }
    }
    cout << ans;
}