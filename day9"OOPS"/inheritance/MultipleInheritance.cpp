#include<iostream>
using namespace std;
class Parent {
    public:
        void earnMoney(){
            cout<<"Parents earns Money"<<endl;
        }
};
class Gaurdian{
    public:
        void guideChild(){
            cout<<"Gaurdian guide the child."<<endl;
        }
};
class Child:public Parent,public Gaurdian{
    public :
        void spendMoney(){
            cout<<"Child Spends Money."<<endl;
        }
};

int main()
{
    Child ch1;
    ch1.earnMoney();
    ch1.guideChild();
    ch1.spendMoney();

    return 0;
}