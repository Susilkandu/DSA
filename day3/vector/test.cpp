// this file show the method of the vector
/*
 vector is a dynamic array provided by the Standard Template Library (STL) that allows you to store multiple elements of the same type. Unlike regular arrays, vectors can grow or shrink in size as needed, making them more flexible for handling collections of data.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
// vector<int>vec; //it create an empty vector
vector<int>vec={1,2,3,4,34,22};   //it vector have size 4 and capacity have 4 and and filled all with 10

cout<<"Capacity: "<<vec.capacity()<<endl;// Returns the current capacity of the vec vector
cout<<"Size: "<<vec.size()<<endl;   // return the number of elements
cout<<"Is Empty: "<<vec.empty()<<endl;   //return true when vector is empty and return false when vector have elements

// Adding Elements
cout<<"Capacit: "<<vec.capacity()<<endl;
vec.push_back(6);   //Add an element at the end
vec.emplace_back(8);    //Constructs an element in place at the end of the end

// Inserting Elements
vec.insert(vec.begin()+1,5);    //inset 5 at the index 1

//Accessing Elements

cout<<"First Elements: "<<vec[0]<<endl;
cout<<"Second Element: "<<vec.at(0)<<endl; //Access using at() method

// Modifying Elements
vec[0]=89;
cout<<"Modified first Element: "<<vec.front()<<endl; //Access first element by using front()
cout<<"Last Element: "<<vec.back()<<endl; //Access the last elemnet by back()

// Removing Elements
vec.pop_back();     // removes last element form pop_back()
vec.erase(vec.begin()+0); // Removes element at the index 0

// Clearing the Vector
// vec.clear();    //Removes all elements

// Iterators
cout<<"iterating";
for(auto it = vec.begin(); it!=vec.end();it++){
    cout<<*it<<" "; // It print each element using iterator
}
cout<<endl;

// Sorting he Vector (requires <algorihm>)
sort(vec.begin(),vec.end()); //sort in ascending order
sort(vec.begin(),vec.end(),greater<int>()); //sort in descending order

// Reverse Iterators
cout<<"Reverse Iterating"<<endl;
for(auto it = vec.rbegin();it!=vec.rend();it++){
    cout<<*it<<" ";
};

// Binary Search
cout<<"bool"<<binary_search(vec.begin(),vec.end(),22);

cout<<endl;
cout<<"Capacit: "<<vec.capacity()<<endl;


    return 0;
}