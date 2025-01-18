#include<iostream>
using namespace std;
class BankAccount{
    private:
    string accountNumber;
    double balance;
    public:
    BankAccount(string accountNumber,double balance){//this is the Constructor
        this->accountNumber=accountNumber;
        this->balance=balance;
    }
    void withdraw(double amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            cout<<"Withdrawn: "<<amount;
        }else if(amount<1){
            cerr<<"Invalid Amount Please Enter at least 1 rupees"<<endl;
        }
        else{
            cerr<<"Insufficient funds"<<endl;
        }
    }
    double getBalance(){
        return balance;
    }
};
int main(){
    BankAccount a1("pubn0815000100268896",99999.0);
    cout<<a1.getBalance()<<endl;
    a1.withdraw(1000000);
    return 0;
}