/* Constructor is a special functiona of a class that is automatically called when an object of that class is created
 . It's primarly used to initialize the value of it's attributes
Constructor are three types :- 
    1. Default Constructor
    2. Parameterized Constructor
    3. Copy Constructor
 */
#include<iostream>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;
    public:
    BankAccount(){//It is Default Constructor that does not take any parameter
        accountNumber="00";
        balance=0.0;
        cout<<"Default Constructor Called : Accout Created with default values"<<endl;
    }
    BankAccount(string accNum, double initialBalance){//Parametrize Constructor
    accountNumber= accNum;
    balance=initialBalance;
    cout<<"Parameterize Called : Account Number: "<<accountNumber<<"Balance: "<<balance<<endl;
    }
    BankAccount(const BankAccount &account){//Copy Constructor
    accountNumber=account.accountNumber;i
    balance=account.balance;
    cout<<"Copy Constructor Called : Account Number: "<<accountNumber<<" , Balance:"<<balance<<endl;
    }
    ~BankAccount(){ //Destructor 
        cout<<"Destructor Called : Account Number: "<<accountNumber<<"is being destroyed."<<endl;
    }
    void display(){
        cout<<"Account Number: "<<accountNumber<<"Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount acc1;   //default constructor will will be call
    BankAccount acc2("cbin0815000100268896",99393.0);    //parameterize constructor will be call
    BankAccount acc3=acc2; //copy constructor will be call
    acc1.display();
    acc2.display();
    acc3.display();
    return 0;
}