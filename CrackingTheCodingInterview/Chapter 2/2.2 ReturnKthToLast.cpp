#include <iostream>
using namespace std;

// link list node
struct Node {
    int data;
    struct Node* next;
};

// function to give kth from last 
void printKthFromLast(struct Node* head, int n)
{
    int len = 0, i;
    struct Node* temp = head;

    // count number of nodes in linked list
    while(temp!= NULL) {
        temp = temp->next;
        len++;
    }

    // check if k is not greater than len
    if (len < n) {
        return;
    }

    temp = head;

    // get the len(len-k+1) node
    for (i = 1; i < len - n + 1; i++)
        temp = temp->next;
    
    cout << temp->data;
}

void push(struct Node** head_ref, int new_data)
{
    // allocate node
    struct Node* new_node = new Node();

    // put in the data
    new_node->data = new_data;

    // link the old list of the new node
    new_node->next = (*head_ref);

    // move the head to the point to the new node
    (*head_ref) = new_node;
}

int main()
{
    // empty list
    struct Node* head = NULL;

    // create linked
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);

    // function call
    printKthFromLast(head, 2);
    return 0;
}


