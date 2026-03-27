// Implemented an iterative solution to reverse a singly linked list using pointer manipulation. Demonstrates core concepts of data structures including node traversal, pointer handling, and in-place reversal with O(n) time complexity and O(1) space complexity.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *reverseList(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    while (current)
    {
        Node *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
void display(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;
    Node *fifth = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    cout << "Original: ";
    display(head);

    head = reverseList(head);

    cout << "Reversed: ";
    display(head);
    return 0;
}