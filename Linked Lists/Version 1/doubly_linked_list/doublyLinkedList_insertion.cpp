// Implementation of a doubly linked list in C++ with basic insertion and traversal operations for learning and practice.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void display(Node *head)
{
    Node *ptr = head;
    while (ptr!= NULL)
    {
        cout << "Elements " << ptr->data << endl;
        ptr = ptr->next;
    }
}
void displayReverse(Node *head){
    Node *ptr = head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    while(ptr!=NULL){
        cout<<"Elements "<<ptr->data<<endl;
        ptr=ptr->prev;
    }
}
// Case 1
Node *insertAtFirst(Node *head,int data){
    Node *ptr = new Node;
    ptr->data = data;
    ptr->next = head;
    ptr->prev = NULL;
    head->prev = ptr;
    head = ptr;
    return head;
}
// Case 2
Node *insertInBetween(Node *head, int index, int data){
    Node *ptr = new Node;
    Node *temp = head;
    for (int i = 0; i < index-1; i++)
    {
        temp=temp->next;
    }
    ptr->data = data;
    ptr->next = temp->next;
    ptr->prev = temp;
    temp->next = ptr;
    return head;
}
// Case 3
Node *insertAtEnd(Node *head, int data){
    Node *ptr = new Node;
    Node *temp = head;
    ptr->data = data;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    ptr->prev = temp;
    ptr->next = NULL;
    temp->next = ptr;
    return head;
}
// Case 4 
Node *insertGivenIndex(Node *head, Node *prevNode, int data){
    Node *ptr = new Node;
    ptr->data = data;
    ptr->next = prevNode->next;
    ptr->prev = prevNode;
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

    head->prev = NULL;
    head->data = 9;
    head->next = second;

    second->prev = head;
    second->data = 6;
    second->next = third;

    third->prev = second;
    third->data = 12;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 17;
    fourth->next =fifth;

    fifth->prev =fourth;
    fifth->data = 61;
    fifth->next = NULL;
    cout<<"Before insetion"<<endl;
    display(head);
    // displayReverse(head);
    // head = insertAtFirst(head, 91);
    // head = insertInBetween(head, 3, 62);
    // head = insertAtEnd(head, 45);
    head = insertGivenIndex(head, fourth, 73);
    cout<<"After insetion"<<endl;
    display(head);
    return 0;
}
