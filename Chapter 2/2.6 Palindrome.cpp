#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
    int data;
    Node(int d) {data = d; }
    Node* ptr;
};

// function to check if palindrome
bool isPalindrome(Node* head)
{
    // temp pointer
    Node* slow = head;

    // declare a stack
    stack<int> s;

    // push all elements of list to stack
    while (slow != NULL) {
        s.push(slow->data);

        // move ahead
        slow = slow->ptr;
    }

    // iterate list again and check by
    // popping from stack
    while (head != NULL) {
        // get the top most element
        int i = s.top();

        // pop the element
        s.pop();

        // check if data is not same as popped element
        if (head->data != i) {
            return false;
        }

        // move ahead
        head = head->ptr;
    }

    return true;
}

int main()
{
 
    // Addition of linked list
    Node one = Node(1);
    Node two = Node(2);
    Node three = Node(3);
    Node four = Node(2);
    Node five = Node(1);
 
    // Initialize the next pointer
    // of every current pointer
    five.ptr = NULL;
    one.ptr = &two;
    two.ptr = &three;
    three.ptr = &four;
    four.ptr = &five;
    Node* temp = &one;
 
    // Call function to check palindrome or not
    int result = isPalindrome(&one);
 
    if (result == 1)
        cout << "isPalindrome is true\n";
    else
        cout << "isPalindrome is false\n";
 
    return 0;
}
 