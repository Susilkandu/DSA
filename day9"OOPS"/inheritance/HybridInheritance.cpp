#include <iostream>
using namespace std;
class GrandParent
{
public:
    void saveMoney()
    {
        cout << "GrandParent save money" << endl;
    }
};
class Parent : public GrandParent
{
public:
    void earnMoney()
    {
        cout << "Parent earns money." << endl;
    }
};
class Gaurdian
{
public:
    void guideChild()
    {
        cout << "Gaurdian guides the child." << endl;
    }
};
class Child: public Parent,public Gaurdian{
    public:
        void spendMoney(){
            cout<<"Child spend money."<<endl;
        }
};
int main()
{
    Child ch1;
    ch1.saveMoney();
    ch1.earnMoney();
    ch1.guideChild();
    ch1.spendMoney();
    return 0;
}
