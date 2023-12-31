/*
c++ Program to remove duplicates in an unsorted
linked list
*/
#include <iostream>
#include <unordered_set>
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
    //hash to store seen values
    unordered_set<int> seen;

    // pick elements one by one
    struct Node* curr = start;
    struct Node* prev = NULL;
    while (curr != NULL) {
        // if current values is seen before
        if (seen.find(curr->data) != seen.end()) {
            prev->next = curr->next;
            delete (curr);
        }
        else {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
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