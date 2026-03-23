// Implementation of a circular queue using a singly linked list in C++ with operations for insertion and deletion.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
class Queue
{
    Node *front = NULL;
    Node *rear = NULL;

public:
    void enqueue(int data)
    {
        Node *n = new Node;
        n->data = data;
        if (front == NULL)
        {
            front = rear = n;
            n->next = front;
        }
        else
        {
            rear->next = n;
            rear = n;
            n->next = front;
        }
    }
    int dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue underflow";
            return -1;
        }
        int val = front->data;
        if (front == rear)
        {
            delete front;
            front = rear = NULL;
        }
        else
        {

            Node *n = front;
            front = front->next;
            rear->next = front;
            delete n;
        }
        return val;
    }
    void show()
    {
        if (front == NULL)
        {
            cout << "Queue underflow";
            return;
        }
        Node *p = front;
        do
        {
            cout << p->data << " ";
            p = p->next;
        } while (p != front);
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(8);
    q.enqueue(10);
    q.show();
    cout << "\n Deleted value " << q.dequeue() << endl;
    q.show();
    return 0;
}