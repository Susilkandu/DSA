/*
you have given ip address in a string:-
    ip = 112.211.22.01
now you give output
        112[.]211[.]22[.]01
*/
#include <iostream>
using namespace std;
void defengeIp(string ip);
int main()
{
    string ip = "112.211.22.01";
    defengeIp(ip);
    return 0;
}
void defengeIp(string ip)
{
    int i=0;
    string ip2;
    while(ip[i]!='\0'){
        if(ip[i]=='.'){
            ip2+="[.]";
        }else{
            ip2+=ip[i];
        }
        i++;
    }
    cout<<ip2;

}