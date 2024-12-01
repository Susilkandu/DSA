/*
you have given a string like str="adwaacss"
so you have give output the longest palindrome size
so output is 5
*/
#include <iostream>
#include<vector>
using namespace std;
int findOutLongestPalindrom(string str);
int main()
{
    string str = "asdsa";
    int longest = findOutLongestPalindrom(str);
    cout<<"Longest palindrome can be "<<longest;
    return 0;
}
int findOutLongestPalindrom(string str)
{
    int size = str.size();
    int count =0, odd=0;
    vector<int>lwr(26,0);
    // counting alphabets
    for(int i=0;i<size;i++){
        lwr[str[i]-'a']++;
    }
    for(int i=0;i<lwr.size();i++){
        if(lwr[i]%2==0){
            count+=lwr[i];
        }else{
            count+=lwr[i]-1;
            odd=1;
        }
    }
    return count+odd;
}