#include<iostream>
using namespace std;
class Parent {
    public:
        void earnMoney(){
            cout<<"Parents earns Money"<<endl;
        }
};
class Child:public Parent{
    public :
        void spendMoney(){
            cout<<"Child Spends Money."<<endl;
        }
};

int main()
{
    Child ch1;
    ch1.earnMoney();
    ch1.spendMoney();

    return 0;
}