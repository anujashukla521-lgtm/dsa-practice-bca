// This program demonstrates the creation and traversal of a singly linked list and supports insertion at the beginning, end, and at a specific position, insertion after a given node, display of elements, and safe deletion of the entire list using dynamic memory management.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
void display(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element " << ptr->data << endl;
        ptr = ptr->next;
    }
}
// Case 1
struct Node *insertAtBeginning(Node *head, int data)
{
    Node *ptr = new struct Node;
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
// Case 2
struct Node *insertInBetween(Node *head, int data, int index)
{
    Node *ptr = new struct Node;
    Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// Case 3
struct Node *insertAEnd(Node *head, int data)
{
    Node *ptr = new struct Node;
    ptr->data = data;
    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
// Case 4
struct Node *insertAfterNode(Node *head, Node *prevNode, int data)
{
    Node *ptr = new struct Node;
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
void deletion(Node *&head)
{
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    head = new struct Node;
    second = new struct Node;
    third = new struct Node;
    fourth = new struct Node;
    fifth = new struct Node;

    head->data = 67;
    head->next = second;

    second->data = 45;
    second->next = third;

    third->data = 64;
    third->next = fourth;

    fourth->data = 87;
    fourth->next = fifth;

    fifth->data = 11;
    fifth->next = NULL;
    cout << "Before insertion " << endl;
    display(head);
    // head = insertAtBeginning(head, 91);
    // head = insertInBetween(head, 71, 2);
    // head = insertAEnd(head, 17);
    head = insertAfterNode(head, third, 39);
    cout << "After insertion " << endl;
    display(head);
    deletion(head);
    if (head == NULL)
    {
        cout << "Linked list deleted successfully" << endl;
    }
    return 0;
}
