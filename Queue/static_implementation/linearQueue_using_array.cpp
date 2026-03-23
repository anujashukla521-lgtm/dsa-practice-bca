// C++ implementation of a Linear Queue using dynamic memory allocation, supporting core operations (enqueue, dequeue, display). Demonstrates OOP principles, manual memory management, and fundamental queue behavior using arrays.

#include <iostream>
using namespace std;

class Queue
{
    int front, rear, size;
    int *que;

public:
    Queue(int s)
    {
        size = s;
        front = -1;
        rear = -1;
        que = new int[size];
    }
    void enqueue(int x)
    {
        if (rear == size - 1)
        {
            cout << "Queue overflow ";
            return;
        }
        else
        {
            if (front == -1)
            {
                front = rear = 0;
            }
            else
            {
                rear++;
            }
            que[rear] = x;
        }
    }
    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue underflow ";
            return -1;
        }
        else
        {
            int x = que[front];
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front++;
            }
            return x;
        }
    }
    void display()
    {
        if (front == -1)
        {
            cout << "Queue underflow ";
            return;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << que[i] << " ";
            }
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
    Queue q(15);
    q.enqueue(7);
    q.enqueue(4);
    q.enqueue(2);
    q.enqueue(11);
    q.enqueue(13);
    q.enqueue(9);
    q.display();
    cout << "Deleted element " << q.dequeue() << endl;
    cout << "Deleted element " << q.dequeue() << endl;
    q.display();
    return 0;
}