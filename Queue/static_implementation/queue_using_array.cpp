#include <iostream>
using namespace std;

class Queue
{
    int size, front, rear, *arr;

public:
    Queue()
    {
        size = 100;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    bool isEmpty()
    {
        return (front == -1);
    }

    bool isFull()
    {
        return (rear == size - 1);
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full!!" << endl;
        }
        else
        {
            if (front == -1)
                front = 0;

            rear++;
            arr[rear] = val;
            cout << val << " inserted" << endl;
        }
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!!" << endl;
            return -1;
        }
        else
        {
            int a = arr[front];

            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front++;
                return a;
            }
        }
    }

    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue obj;

    if (obj.isEmpty())
    {
        cout << "Queue is empty" << endl;
    }

    obj.enqueue(7);
    obj.enqueue(89);
    obj.enqueue(19);

    cout << "Deleted element is " << obj.dequeue() << endl;

    if (obj.isEmpty())
    {
        cout << "Queue is empty" << endl;
    }

    if (obj.isFull())
    {
        cout << "Queue is full" << endl;
    }

    return 0;
}