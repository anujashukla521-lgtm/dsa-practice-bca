// This program implements a singly linked list in C++ using OOP. It supports insertion at the front, end, and a specific index, along with deletion from the front, end, and a given index. It also includes a display function to print the list and a destructor to safely free all dynamically allocated memory, preventing memory leaks.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insertAtFront(int x);
    void insertAtEnd(int x);
    void insertAtGivenIndex(int index, int x);
    void deleteAtFront();
    void deleteAtEnd();
    void deleteAtGivenIndex(int index);
    void display();
    ~LinkedList()
    {
        Node *current = head;
        while (current != NULL)
        {
            Node *nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = NULL;
    }
};
// INSERT AT FRONT
void LinkedList ::insertAtFront(int x)
{
    Node *p = new Node;
    p->data = x;
    p->next = head;
    head = p;
}
// INSERT AT LAST
void LinkedList ::insertAtEnd(int x)
{
    if (head == NULL)
    {
        insertAtFront(x);
        return;
    }
    Node *p = new Node;
    p->data = x;
    p->next = NULL;
    Node *q = head;
    while (q->next != NULL)
        q = q->next;
    q->next = p;
}
// INSERT AT GIVEN INDEX
void LinkedList ::insertAtGivenIndex(int index, int x)
{
    if (index == 0)
    {
        insertAtFront(x);
        return;
    }
    Node *q = head;
    for (int i = 0; i < index - 1 && q != NULL; i++)
    {
        q = q->next;
    }
    if (q == NULL)
    {
        cout << "Invalid index\n";
        return;
    }
    Node *p = new Node;
    p->data = x;
    p->next = q->next;
    q->next = p;
}
// DELETE FRONT
void LinkedList ::deleteAtFront()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *p = head;
    head = head->next;
    delete p;
}
// DELETE LAST
void LinkedList ::deleteAtEnd()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
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
}
// DELETE AT INDEX
void LinkedList ::deleteAtGivenIndex(int index)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (index == 0)
    {
        deleteAtFront();
        return;
    }
    Node *p = head;
    Node *q = head->next;
    for (int i = 0; i < index-1 && q != NULL; i++)
    {
        p = p->next;
        q = q->next;
    }
    if (q == NULL)
    {
        cout << "Invalid index" << endl;
        return;
    }
    p->next = q->next;
    delete q;
}
void LinkedList ::display()
{
    if (head == NULL)
    {
        cout << "List is empty\n";
        return;
    }
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
    LinkedList l;
    l.insertAtFront(21);
    l.insertAtFront(7);
    l.insertAtEnd(11);
    l.insertAtGivenIndex(2, 10);
    l.display();

    l.deleteAtFront();
    l.display();
    l.deleteAtEnd();
    l.display();
    l.deleteAtGivenIndex(2);
    l.display();
    return 0;
}