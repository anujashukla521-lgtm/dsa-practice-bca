#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

// Case 1
Node *deleteAtStart(Node *head)
{
    Node *ptr = head;
    head = head->next;
    if (head)
        head->prev = NULL;
    delete ptr;
    return head;
}
// Case 2
Node *deleteAtGivenIndex(Node *head, int index)
{
    if(!head)  return NULL;
    Node *p = head;
    for (int i = 0; i < index; i++)
    {
        p = p->next;
    }
    p->next = q->next;
    q->next->prev = p;
    delete q;
    return head;
}
void display(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node{31, NULL, NULL};
    Node *second = new Node{84, head, NULL};
    Node *third = new Node{91, second, NULL};
    Node *fourth = new Node{72, third, NULL};
    Node *fifth = new Node{49, fourth, NULL};

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    cout << "Before deletion " << endl;
    display(head);
    cout << "After deletion" << endl;
    // head = deleteAtStart(head);
    head = deleteAtGivenIndex(head, 3);
    display(head);
    return 0;
}