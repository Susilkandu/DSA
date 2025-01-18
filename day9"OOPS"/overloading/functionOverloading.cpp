/*
function overloading allow multiple functions to the same name but differenct paramenter. 
    this enables the same function name to be used for different types of operations.
    overloading is resolved at the compile time or you can say static binding
*/
#include<iostream>
using namespace std;
class overload{
    public:
    void display(int a){
        cout<<"Integer : "<<a<<endl;
    }
    void display(int a, float b){
        cout<<"Integer :"<<a<<" and Integer "<<b<<endl;
    }
    void display(string name, int favNum){
        cout<<"Name is "<<name<<" and favourite number is "<<favNum<<endl;
    }
};  
int main(){
    overload a;
    a.display(5);
    a.display(7,55.3);
    a.display("Savvy",9);

    return 0;
}