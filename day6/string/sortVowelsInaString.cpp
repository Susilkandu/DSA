/*
Sort Vowels in a String
    givent string  = "Elephant"
    to be outpu    = "Elaphent"
Constraints :- Capital vowels must be first then small vowels come
*/
#include <iostream>
#include <vector>
using namespace std;
void sort(string &str);
int main()
{
    string str = "Elephant";
    sort(str);
    cout << str;
}
void sort(string &str)
{
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        // lower a,e,i,o,u
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            lower[str[i] - 'a']++;
            str[i] = '#';
        }
        // upper A,E,I,O,U
        else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            upper[str[i] - 'A']++;
            str[i] = '#';
        }
    }
    // upper
    string vowel;
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i])
        {
            vowel += c;
            upper[i]--;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i])
        {
            vowel += c;
            lower[i]--;
        }
    }
    int first = 0, second = 0;
    while (second <vowel.size())
    {
        if(str[first]=='#'){
            str[first]=vowel[second];
            second++;
        }
        first++;
    }
}