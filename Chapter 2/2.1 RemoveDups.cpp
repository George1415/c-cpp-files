/*
c++ Program to remove duplicates in an unsorted
linked list
*/
#include <iostream>
using namespace std;

// a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Utility function to create a new Node
struct Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// function ro remove duplicates
void removeDuplicates(struct Node* start)
{
    struct Node *ptr1, *ptr2, *dup;
    ptr1 = start;
 
    // Pick elements one by one
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
 
        // Compare it to the rest of the elements
        while (ptr2->next != NULL) {
            // If duplicate then delete it
            if (ptr1->data == ptr2->next->data) {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}

// function to print nodes
void printList(struct Node* node)
{
    while (node != NULL) {
        cout << node->data << ", ";
        node = node->next;
    }
}

int main()
{
    struct Node* start = newNode(10);
    start->next = newNode(12);
    start->next->next = newNode(11);
    start->next->next->next = newNode(11);
    start->next->next->next->next = newNode(12);
    start->next->next->next->next->next = newNode(11);
    start->next->next->next->next->next->next = newNode(10);

    cout << "Linked list before removing duplicates\n";
    printList(start);

    removeDuplicates(start);

    cout << "\nLinked list after removing duplicates\n";
    printList(start);
    return 0;

}