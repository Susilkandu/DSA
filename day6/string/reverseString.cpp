/*
get string as input from the user and print that't reverse
like input is :- Sushil
    output is :- lihsuS
second proble is to find out the size of the string without using .size() method
    we know in string data type automatic in the last \0 is appended by compiler
    so we can take benefit of this
*/
#include <iostream>
using namespace std;
void reverseString(string str);
void checkSize(string str);
int main()
{
    string str;
    cout << "Enter any string long or short\t";
    getline(cin, str);
    reverseString(str);
    checkSize(str);
    return 0;
}
void reverseString(string str)
{
    int start = 0, end = str.size() - 1;
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << "Reversed Version is :-\t" << str << endl;
}
void checkSize(string str)
{
    int size = 0;
    while (str[size]!='\0')
    {
        size++;
    }
    cout<<"size is\t"<<size;
}