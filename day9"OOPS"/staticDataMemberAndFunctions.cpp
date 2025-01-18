/*
A static data member is shared among all objects of class . It belongs to the class rather than any specific instance.
 it is used to keep track of the information relevant to the class
A static member funciotn can be called without an object of the class. It can only access static data members.
    it can't access non-static member directly.
    it is useful fo roperations that related to the class but do not require an instance.
*/
/* A Example fo the real world in Cybersecurity
    :- let's create a simple cybesecurity system that tracks the number of security breaches and provides
     functionality to log breaches while encapsulating sesiive data and abstracting the complexity

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class CyberSecuritySystem
{
private:
    static int breachCount; // Static data member
    vector<string> logs;    // Stores logs of breaches
public:
    static int getBreachCount(){    //static member function
        return breachCount;
    }
    void logBreach(const string &descr){
        logs.push_back(descr);
        breachCount++;
    }
    void displayLogs(){
        cout<<"Breach Logs: "<<endl;
        for(const auto &log:logs){
            cout<<"- "<<log<<endl;
        }
    }

};
int CyberSecuritySystem::breachCount=0;//Initialize static data member
int main(){
    CyberSecuritySystem system;
    // log Some Security Breaches
    system.logBreach("Unauthorized access attempt from IP 192.168.1.18");
    system.logBreach("Malware detected on Server 3");
    system.logBreach("Phishing attempt repoted.");

    // Display breach logs
    system.displayLogs();
    cout<<"Total Breaches: "<<CyberSecuritySystem::getBreachCount()<<endl;
    return 0;
}