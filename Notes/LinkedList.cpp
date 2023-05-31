#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int Value;
    Node* Next;
};

void printList(Node *n) {
    // Prints the head element first and then sets n to the next element in the list and then continues until the next element is NULL
    while (n != NULL) {
        cout << n->Value << endl;
        n = n->Next;
    }
}

void insertAtTheFront(Node**head, int newValue) {
    // Steps for this function
    // 1. Prepare a newNode
    Node *newNode = new Node();
    newNode->Value = newValue;
    // 2. Put it in front of the current head
    newNode->Next = *head;
    // 3. Move head of the list to point to the newNode 
    *head = newNode;
}

void insertAtTheEnd(Node**head, int newValue) {
    // 1. Prepare a new node
    Node *newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;

    // 2. If linked list empty, newNode will be a head node
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // 3. Find the last node
    Node *last = *head;
    while (last->Next != NULL) {
        last = last->Next;
    }
    
    // 4. Insert newNode after last node (at the end)
    last->Next = newNode;
}

void insertAfter(Node*previous, int newValue) {
     // 1. Check if previous node is NULL
     if (previous == NULL) {
        cout << "Previous can not be NULL";
        return;
     }

     // 2. Prepare a newNode
     Node *newNode = new Node();
     newNode->Value = newValue;

     // 3. Insert newNode after previous
     newNode->Next = previous->Next; // 3
     previous->Next = newNode; // The value that the user inputted
}

int main() {
    // Similar to creating objects but with pointers
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    // Assigning each pointer variable with a value and linking the elements by pointing the first element to the second element and so on
    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL; // Last element is the list 

    insertAtTheFront(&head, 0); // since you are passing the address of a pointer, in the first function parameter you will have to pass a pointer to a pointer (Node**head)
    insertAtTheEnd(&head, 4);
    insertAfter(third, 3.5);
    printList(head);


    return 0;
}