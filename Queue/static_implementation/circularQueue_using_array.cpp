// C++ implementation of a Circular Queue using dynamic array, supporting enqueue and dequeue operations with efficient memory usage.

#include <iostream>
using namespace std;

class Queue
{
    int size, front, rear;
    int *que;

public:
    Queue(int s)
    {
        size = s;
        front = -1;
        rear = -1;
        que = new int[size];
    }
    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (front == (rear + 1) % size)
            return true;
        else
            return false;
    }
    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full ";
            return;
        }
        else
        {
            if (front == -1)
                front = rear = 0;
            else
                rear = (rear + 1) % size;
            que[rear] = x;
        }
    }
    bool dequeue(int &x)
    {
        if (isEmpty())
        {
            cout << "Queue is empty ";
            return false;
        }
        else
        {
            x = que[front];
            if (front == rear)
                front = rear = -1;
            else
                front = (front + 1) % size;
            return true;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty ";
            return;
        }
        else
        {
            int i = front;
            while (i != rear)
            {
                cout << que[i] << " ";
                i = (i + 1) % size;
            }
            cout << que[i] << " ";
            cout << endl;
        }
    }
    ~Queue()
    {
        delete[] que;
    }
};
int main()
{
    int val;
    Queue q(5);
    q.enqueue(6);
    q.enqueue(5);
    q.enqueue(9);
    q.enqueue(1);
    q.enqueue(7);
    q.display();
    if (q.dequeue(val))
        cout << val << " deleted" << endl;
    else
        cout << "Nothing to delete" << endl;
    q.display();
    q.enqueue(4);
    q.display();
    return 0;
}