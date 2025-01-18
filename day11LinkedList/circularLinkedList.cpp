/*
Node structure
 insertion
    pushFront(head Null, existing nodes)
    pushBack(head Null, existing nodes)
 updation
    update via key(head Null, not found )
 deletion 
    delete via key (head Null, not found, found)
*/
#include<iostream>
#include<stdexcept>
using namespace std;
class Node{
    public:
    int data;
    Node *next, *prev;
    Node(int value):data(value),next(NULL),prev(NULL){};
};
class CircularblyLinkedList{
    private :
    Node *head;
    public:
    CircularblyLinkedList():head(NULL){};
    // insertion
    void push_front(int value){
        Node *tmp = new Node(value);
        if(head==NULL){
            head=tmp;
            tmp->next=tmp;
            tmp->prev=tmp;
        }else{
            Node *last = head->prev;
            last->next=tmp;
            tmp->prev=last;
            tmp->next=head;
            head->prev=tmp;
            head=tmp;
        }
    };
    void display(){
        Node *crnt = head->prev;
        if(!crnt){
            cout<<"List is Empty";
            return;
        }
        do{
            cout<<crnt->data<<endl;
            crnt=crnt->prev;
        }while(crnt!=head);
    }
};

int main(){
CircularblyLinkedList d1;
int arr[5]={1,2,3,4,5};
for(int i=0;i<=4;i++){
d1.push_front(arr[i]);
}
// after insertion
cout<<"after insertion";
d1.display();
return 0;
}