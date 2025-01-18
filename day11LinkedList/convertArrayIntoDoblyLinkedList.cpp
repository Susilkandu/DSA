#include <iostream>
using namespace std;

class Node { // Class name should start with an uppercase letter
private:
    int data;
    Node* prev;
    Node* next;

public:
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}

    Node* convertArrIntoLkdList(int arr[], int arSize) {
        Node* head = nullptr; // Initialize head to nullptr
        for (int i = 0; i < arSize; i++) { // Fixed the loop condition
            Node* temp = new Node(arr[i]);
            if (head == nullptr) {
                head = temp;
            } else {
                temp->next = head;
                head->prev = temp;
                head = temp;
            }
        }
        return head;
    }

    // Added a static method to print the linked list
    static void printLkdList(Node* head) {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next; // Fixed the pointer access
        }
        cout << endl; // Added a newline for better output formatting
    }
};

int main() {
    int arr[7] = {1, 3, 4, 5, 3, 2, 33};
    int arSize = sizeof(arr) / sizeof(arr[0]);
    
    Node* head = Node(0).convertArrIntoLkdList(arr, arSize); // Create a temporary Node to call the method
    Node::printLkdList(head); // Call the static print method

    return 0;
}