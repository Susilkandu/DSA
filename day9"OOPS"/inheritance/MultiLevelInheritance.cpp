#include<iostream>
using namespace std;
class GrandParent{
    public:
        void saveMoney(){
            cout<<"GrandParent saves money."<<endl;
        }
};
class Parent:public GrandParent{
    public:
        void earnMoney(){
            cout<<"Parents earn money."<<endl;
        }
};
class Child : public Parent{
    public:
        void spendMoney(){
            cout<<"Child spends money."<<endl;
        }
};
int main()
{
    Child ch1;
    ch1.earnMoney();
    ch1.saveMoney();
    ch1.spendMoney();

    return 0;
}