#include<iostream>
using namespace std;
class Array
{
private:
    int* arr;
    int capacity;
    int size;
public:
// Constructor to initialize array
Array(int cap){
    capacity = cap;
    size = 0;
    arr = new int[capacity]; //Dynamic allocation of array memory
}
// Destructor to free allocate memory
~Array(){
    delete[] arr;
}

void insert(int item, int pos){
    // validation
    if(size>=capacity){
        cout<<"Array is full"<<endl;
        return;
    }
    if(pos<0 || pos>size){
        cout<<"Invalid position"<<endl;
        return;
    }

    // shift element to make room for item
    for(int i = size; i>pos; i--){
        arr[i] = arr[i-1];
    }
    
    arr[pos]=item;
    size++;
}

// Method to display array elements
void display(){
    cout<<"array Elements: ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int getSize(){
    return size;
}
};
int main(){
    int capacity;
    cout<<"Enter maximum size of the array: ";
    cin>> capacity;

    Array myArray(capacity);
    int item, pos;
    cout<<"Enter the position (0 to "<<myArray.getSize()<<")to insert : ";
    cin>>pos;
    cout<<"Enter the value to insert: ";
    cin>>item;
    myArray.insert(item, pos);

    myArray.display();
    return 0;
}


