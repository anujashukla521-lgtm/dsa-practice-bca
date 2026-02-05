// This program implements deletion operations in a singly linked list, including deleting the first node, a node at a given index, the last node, and a node with a specific value. All functions handle edge cases such as empty lists and single-node lists to ensure safe memory management and avoid runtime errors.

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
struct Node *deleteFirstNode(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *ptr = head;
    head = head->next;
    delete ptr;
    return head;
}
// Case 2
struct Node *deleteInBetween(Node *head, int index)
{
    if (head == NULL)
        return NULL;
    if (index == 0)
        return deleteFirstNode(head);
    Node *p = head;
    Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    delete q;
    return head;
}
// Case 3
struct Node *deleteAtEnd(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *p = head;
    Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    delete q;
    return head;
}
// Case 4
struct Node *deleteGivenValue(Node *head, int value)
{
    if (head == NULL)
        return NULL;
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *p = head;
    Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        delete q;
    }
    return head;
}
int main()
{
    Node *head, *second, *third, *fourth, *fifth;
    head = new struct Node;
    second = new struct Node;
    third = new struct Node;
    fourth = new struct Node;
    fifth = new struct Node;

    head->data = 3;
    head->next = second;
    second->data = 7;
    second->next = third;
    third->data = 12;
    third->next = fourth;
    fourth->data = 8;
    fourth->next = fifth;
    fifth->data = 9;
    fifth->next = NULL;
    cout << "Before deletion" << endl;
    display(head);
    // head = deleteFirstNode(head);
    // head = deleteInBetween(head, 2);
    // head = deleteAtEnd(head);
    head = deleteGivenValue(head, 8);
    cout << "After deletion" << endl;
    display(head);
    return 0;
}
