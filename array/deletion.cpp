#include<iostream>
using namespace std;

int findNumberIndex(int* ptr,int size,int num){
int index;
for(int i=0;i<size;i++){
if((*(ptr+i)==num)){
    index = i;
}}

if(index<size && index>=0){
    return index;
}else{
    return -1;
    
}
}
int deleteNumber(int *ptr, int size, int num){
    int index = findNumberIndex(ptr,size,num);
    if(index==-1){
     cout<<endl<<num<<"is not found";
     exit(1);
    }
    else{
      for(int i = index;i<size;i++)
      {
        *(ptr+i) = *(ptr+i+1);
      }
    size--;
    return size;
    }
}

// display
void display(int *ptr, int size){
    cout<<"Array Elements are ; \t";
    for(int i=0;i<size;i++){
        cout<<*(ptr+i)<<"\t";
    }
}

int main()
{
int numbers[] = {342,3423,43,43};
int size = int(sizeof(numbers)/sizeof(numbers[0]));
int num;
cout<<"Befor deletion Array is :"<<endl;
display(&numbers[0], size);

//take input element
cout<<"Enter the Number that you want to delete \t"<<endl;
cin>>num;
size = deleteNumber(&numbers[0],size,num);

cout<<"After deletion Array is :"<<endl;
display(&numbers[0], size);
    return 0;
}
