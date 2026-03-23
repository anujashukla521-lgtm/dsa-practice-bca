// A simple C++ program demonstrating Queue implementation using a linked list, including insertion (enqueue), deletion (dequeue), and display operations.

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
        n->next = NULL;
        if (front == NULL)
        {
            front = rear = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
    }
    int dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue undeflow";
            return 0;
        }
        else
        {
            Node *n = front;
            int val = n->data;
            front = front->next;
            delete n;
            if (front == NULL)
                rear = NULL;
            return val;
        }
    }
    void show()
    {
        if (front == NULL)
        {
            cout << "Queue undeflow";
            return;
        }
        else
        {
            Node *p = front;
            while (p != NULL)
            {
                cout << p->data << " ";
                p = p->next;
            }
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(71);
    q.enqueue(23);
    q.enqueue(12);
    q.enqueue(9);
    q.enqueue(78);
    q.show();
    cout << "\nDeleted value " << q.dequeue() << endl;
    q.show();
    return 0;
}