// Implemented a singly linked list in C++ using dynamic memory allocation, with traversal and proper deletion of nodes to prevent memory leaks.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
void linkedlisttrav(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element " << ptr->data << endl;
        ptr = ptr->next;
    }
}
void deleteLinkedList(Node *head)
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

    head->data = 7;
    head->next = second;
    second->data = 21;
    second->next = third;
    third->data = 52;
    third->next = fourth;
    fourth->data = 121;
    fourth->next = fifth;
    fifth->data = 453;
    fifth->next = NULL;
    linkedlisttrav(head);
    deleteLinkedList(head);
    return 0;
}