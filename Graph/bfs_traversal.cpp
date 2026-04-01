// Implements Breadth-First Search using a custom queue and visited array for level-order graph traversal.
// Time Complexity: O(V²)

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
    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return rear == size - 1;
    }
    void enqueue(int x)
    {
        if (isFull())
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
        if (isEmpty())
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
    int node;
    int i = 4;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0},

    };
    cout << i << " ";
    visited[i] = 1;
    q.enqueue(i);
    while (!q.isEmpty())
    {
        node = q.dequeue();
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                cout << j << " ";
                visited[j] = 1;
                q.enqueue(j);
            }
        }
    }

    return 0;
}