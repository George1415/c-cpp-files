// The below function take head of Linked List as
// input and return Address of first node in
// the loop if present else return NULL.
#include <iostream>
#include <unordered_set>
using namespace std;

// Structure of linked list node
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x){
        this->val = x;
        this->next = NULL;
    }
};
 
ListNode* detectCycle(ListNode* A)
{
    // declaring map to store node address
    unordered_set<ListNode*> uset;
    ListNode *ptr = A;
 
    // Default consider that no cycle is present
    while (ptr != NULL) {
        // checking if address is already present in map
        if (uset.find(ptr) != uset.end())
          return ptr;
        // if address not present then insert into the set
        else
            uset.insert(ptr);
         
        ptr = ptr->next;
    }
    return NULL;
}

int main()
{
    ListNode* head = new ListNode(50);
    head->next = new ListNode(20);
    head->next->next = new ListNode(15);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(10);
   
    // creating a loop for linked list
    head->next->next->next->next->next = head->next->next;
   
    ListNode* res = detectCycle(head);
    if (res == NULL)
        cout << "Loop does not exist";
    else
        cout << "Loop starting node is " << res->val;
   
    return 0;
}