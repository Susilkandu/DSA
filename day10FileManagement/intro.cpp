/*
C++ provides a set of classes and function for file handling throught 
the 'fstream' library.

    The main classes are:
        .ifstream: for reading from file
        .ofstream: for writing to file
        .fstream: for both reading and writing
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream inputFile("om.txt");
    if(!inputFile.is_open()){
        throw runtime_error("can't open file!");
        return 0;
    }
    string line;
    while(getline(inputFile,line)){
        cout<<line<<endl;
    }




    inputFile.close();
    return 0;
}