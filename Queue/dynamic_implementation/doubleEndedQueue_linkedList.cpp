// Implementation of a Deque (Double Ended Queue) using a singly linked list in C++ with operations for insertion and deletion from both front and rear.

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
    void insert_rear(int x)
    {
        Node *n = new Node;
        n->data = x;
        n->next = NULL;
        if (front == NULL)
            front = rear = n;
        else
        {
            rear->next = n;
            rear = n;
        }
    }
    void insert_front(int x)
    {
        Node *n = new Node;
        n->data = x;
        n->next = NULL;
        if (front == NULL)
            front = rear = n;
        else
        {
            n->next = front;
            front = n;
        }
    }
    int delete_front()
    {
        if (front == NULL)
        {
            cout << "Queue underflow ";
            return -1;
        }
        else
        {
            Node *n = front;
            int x = n->data;
            front = front->next;
            delete n;
            return x;
        }
    }
    int delete_rear()
    {
        if (front == NULL)
        {
            cout << "Queue underflow ";
            return -1;
        }
        else
        {
            if (front == rear)
            {
                int x = front->data;
                delete front;
                front = rear = NULL;
                return x;
            }
            Node *q = front;
            Node *p = front->next;
            while (p->next != NULL)
            {
                p = p->next;
                q = q->next;
            }
            int x = p->data;
            q->next = NULL;
            rear = q;
            delete p;
            return x;
        }
    }
    void show()
    {
        if (front == NULL)
        {
            cout << "Queue underflow ";
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
    q.insert_front(7);
    q.insert_front(2);
    q.insert_front(9);
    q.insert_front(5);
    q.insert_front(1);
    q.insert_rear(3);
    q.show();
    cout << endl;
    q.insert_rear(6);
    q.insert_front(4);
    q.show();
    cout << "Deleted element " << q.delete_front();
    cout << "Deleted element " << q.delete_rear();
    cout << endl;
    q.show();
    return 0;
}