/*
declare variable like :- 
    string varName;
it is like array it's indexing start from the 0 and end with the size-1
and in the last it store \0 for represengting it's the last elements

to take a line of inpu stirng take like :- 
        getline(cin,varNameStr);
    here getline is a function porovided by the cpp
*/
#include<iostream>
using namespace std;
int main(){
string name="suhsil kandu is a very \" Wise, rich, VIP\" person in the whole galaxy";
string fullAddress;
// cout<<"Enter your name \t";
// cin>>name;
// cin.ignore();
// cout<<endl<<"Enter your full address \t";
// getline(cin,fullAddress);
// cout<<"your name is :- "<<name<<endl;
// cout<<"your full address is :- "<<fullAddress<<endl;
// cout<<"size is "<<fullAddress.size();

// append method
    // 1.
        // name+=" kandu";
    // 2.
        // name= name+" tyagi";
    // 3.
        // name.push_back('a'); it use to add single character at the last 
//pop method
    // 1.
        // name.pop_back();    it exclude last character from the our stirng
    
cout<<name;
    return 0;
}    