/*
Exception :- Exception is a event that disrrupts the normal flow of a program's execution.
            It is typically used for error handling
Syntax :-   
            try{
                // codes that may throw exception
                }
                catch(...){
                //code to handle the exception
                }
*/

#include<iostream>
using namespace std;
void riskyFunction(){
    // throw runtime_error("Some error occured");
    cout<<"riskyfunc"<<endl;9
}
class zeroError:public exception{
    private:
        string messages;
    public:
    zeroError(const string &msg):messages(msg){}
    
    // to override the what() method
    virtual const char* what() const noexcept override{
        return messages.c_str(); //return the error message
    }
};
int main(){
    try
    {
        riskyFunction();
        throw zeroError("zero error occured");
    }
    catch(const runtime_error &e){
        cerr<<"Runtime Errro occured : "<<e.what()<<endl;
    }
    catch(const exception &e)
    {
        cerr<<e.what()<<endl;
    }
    
}