// Implemented a Circular Linked List in C++ with traversal and multiple insertion operations, showcasing pointer manipulation and linked list data structure concepts.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void traversal(Node *head)
{
    Node *ptr = head;
    do
    {
        cout << "Elements " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}

// Case 1
Node *insertAtFirst(Node *head, int data)
{
    Node *ptr = new struct Node;
    ptr->data = data;
    Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
// Case 2
Node *insertInBetween(Node *head, int index, int data)
{
    Node *ptr = new struct Node;
    Node *p = head;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// Case 3
Node *insertAtEnd(Node *head, int data)
{
    Node *ptr = new struct Node;
    Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = head;
    p->next = ptr;
    return head;
}
// Case 4
Node *insertGivenIndex(Node *head, Node *prevNode, int data)
{
    Node *ptr = new struct Node;
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
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

    third->data = 11;
    third->next = fourth;

    fourth->data = 17;
    fourth->next = fifth;

    fifth->data = 19;
    fifth->next = head;

    cout << "Before insertion" << endl;
    traversal(head);
    head = insertAtFirst(head, 21);
    // head = insertInBetween(head, 2, 61);
    // head = insertAtEnd(head, 52);
    // head = insertGivenIndex(head, second, 76);
    cout << "After insertion" << endl;
    traversal(head);
    return 0;
}