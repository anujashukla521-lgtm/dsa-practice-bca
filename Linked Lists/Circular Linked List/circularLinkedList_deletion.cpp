#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
void display(Node *head)
{
    Node *ptr = head;
    do
    {
        cout << "Element " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}
// Case 1
Node* delAtFirst(Node* head) {
    if (head == NULL)
     return NULL;
     // Only one node
    if (head->next == head) {
        delete head;
        return NULL;
    }
     Node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    Node* temp = head;
    head = head->next;
    last->next = head;  
    delete temp;

    return head;
}
// Case 2
Node *delInBetween(Node *head, int index){
    Node *p=head;
    Node *q=head->next;
    for (int i = 0; i < index-1; i++)
    {
       p=p->next;
       q=q->next;
    }
    if(q!=head){
        p->next=q->next;
        delete q;
        
    }
    return head;
}
// Case 3
Node *delAtEnd(Node *head){
    Node *p= head;
    Node *q = head->next;
    while(q->next!=head){
        p=p->next;
        q=q->next;
    }
    p->next=head;
    delete q;
    return head;
}
// Case 4
Node *delGivenValue(Node *head, int value){
    Node *p=head;
    Node *q=head->next;
    while(q!=head&&q->data!=value){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        delete q;
    }
    return head;
}
int main()
{
    Node *head, *second, *third, *fourth;
    head = new struct Node;
    second = new struct Node;
    third = new struct Node;
    fourth = new struct Node;
    head->data = 6;
    head->next = second;
    second->data = 9;
    second->next = third;
    third->data = 2;
    third->next = fourth;
    fourth->data = 10;
    fourth->next = head;
    cout<<"Before deletion"<<endl;
    display(head);
    // head = delAtFirst(head);
    // head = delInBetween(head, 2);
    // head = delAtEnd(head);
    head = delGivenValue(head, 9);
    cout<<"After deletion"<<endl;
    display(head);
    return 0;
}