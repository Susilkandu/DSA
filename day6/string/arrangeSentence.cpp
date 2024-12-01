/*
you have a given string and in every word's in last have there correct index
so arrange that sentence according to that index
like givent sentnece is str= "Ishwar3 I1 have";
so output be :- "I have Ishwar"
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string snt = "apple9 banana1 cherry2 date3 elderberry8 fig7 grape6 honeydew5 orange4";
    int i = 0;
    string tmpStr;
    vector<string> ans(10);
    // first arranging the words in new ans vector
    while (i < snt.size())
    {
        if (snt[i] == ' ')
        {
            // processing the current word
            int pos = tmpStr[tmpStr.size() - 1]-'0'+1;
            tmpStr.pop_back();
            ans[pos] = tmpStr;
            tmpStr.clear();
        }
        else
        {
            tmpStr += snt[i];
        }

        i++;
    }
    // processing the last word
    int pos = tmpStr[tmpStr.size() - 1]-'0'+1;
            tmpStr.pop_back();
            ans[pos] = tmpStr;
            tmpStr.clear();

    // printing the correnct ordered sentence
    for(i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
