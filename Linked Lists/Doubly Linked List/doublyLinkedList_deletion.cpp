// Implementation of a doubly linked list in C++ with basic deletion and traversal operations for learning and practice.


#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};
void display(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << "Elements " << ptr->data << endl;
        ptr = ptr->next;
    }
}
// Case 1
Node *deleteAtStart(Node *head){
    Node *temp = head;
    head = head->next;
    head->next->prev = NULL;
    delete temp;
    return head;
}
// Case 2
Node *deleteInBetween(Node *head, int index){
    Node *p = head;
    Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
       p=p->next;
       q=q->next;
    }
    p->next = q->next;
    q->next->prev = p;
    delete q;
    return head;
}
// Case 3
Node *deleteAtEnd(Node *head){
    Node *p = head;
    Node *q = head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next = NULL;
    delete q;
    return head;
}
// Case 4
Node *deleteGivenValue(Node *head, int value){
    Node *p = head;
    Node *q = head->next;
    while(q!=NULL&&q->data!=value){
        p=p->next;
        q=q->next;
    }
    if(q->data == value){
        p->next = q->next;
        q->next->prev = p;
        delete q;
    }
    return head;
}
int main()
{
    Node *head, *second, *third, *fourth, *fifth;
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;
    fifth = new Node;

    head->prev = NULL;
    head->data = 91;
    head->next = second;

    second->prev = head;
    second->data = 62;
    second->next = third;

    third->prev = second;
    third->data = 74;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 87;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->data = 10;
    fifth->next = NULL;
    cout<<"Before deletion"<<endl;
    display(head);
    // head = deleteAtStart(head);
    // head = deleteInBetween(head, 3);
    // head = deleteAtEnd(head);
    head = deleteGivenValue(head, 62);
    cout<<"After deletion"<<endl;
    display(head);
    return 0;
}