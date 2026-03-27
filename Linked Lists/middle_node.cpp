// Implemented an efficient approach to find the middle element of a singly linked list using the fast and slow pointer technique. This method runs in O(n) time and uses O(1) space, demonstrating optimal traversal without extra memory.

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *findMiddle(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main()
{
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    // Node *fourth = new Node;
    // Node *fifth = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // fourth->data = 4;
    // fourth->next = NULL;

    // fifth->data = 5;
    // fifth->next = NULL;
    Node *n = findMiddle(head);
    cout << n->data;
    return 0;
}