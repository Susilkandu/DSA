/*
you have given two string str1="sushil" and str2="lisush"
after rotating 2 time str1 clock wise or antiClockwise is
that equal to the str2
check it
*/
#include <iostream>
using namespace std;
void clockWise(string &str1);
void antiClockWise(string &str1);
int main()
{
    string str1 = "amazon";
    string str2 = "azonam";
    string clock = str1, antClock = str1;
    for (int i = 0; i < 2; i++)
    {
        clockWise(clock);
    }
    if (clock == str2)
    {
        cout << "clockWise Matched";
        return 0;
    }
    // check clockwise
    for (int i = 0; i < 2; i++)
    {
        antiClockWise(antClock);
    }
    if (antClock == str2)
    {
        cout << "Anti clockWise Matched";
        return 0;
    }

    cout << "Not matched";
    return 0;
}
void clockWise(string &str1)
{
    char tmp = str1[str1.size() - 1];
    int index = str1.size() - 1;
    while (index >= 0)
    {
        str1[index] = str1[index - 1];
        index--;
    }
    str1[0] = tmp;
}

void antiClockWise(string &str1)
{
    char tmp = str1[0];
    int index = 1;
    while (index < str1.size())
    {
        str1[index - 1] = str1[index];
        index++;
    }
    str1[str1.size() - 1] = tmp;
}
