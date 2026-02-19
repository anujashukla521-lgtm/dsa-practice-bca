// This program implements a Stack using arrays in C++ with basic operations
// such as push, pop, peek, display, and top/bottom element access.

#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *arr;
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[size];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == size - 1;
    }
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack overflow!! Cannot push " << val << " to the stack" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow!! Cannot pop from the stack" << endl;
            return -1;
        }
        else
        {
            int val = arr[top];
            top--;
            return val;
        }
    }
    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack underflow, elements can't display" << endl;
        }
        else
        {
            cout << arr[top] << endl;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack underflow, elements can't display" << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
        }
    }
    int stackTop()
    {
        return arr[top];
    }
    int stackBottom()
    {
        return arr[0];
    }
    ~Stack()
    {
        delete[] arr;
    }
};
int main()
{
    Stack sp(6);
    sp.push(10);
    sp.push(20);
    sp.push(82);
    sp.push(51);
    sp.peek();
    // sp.display();
    // cout << "Deleted element "<<sp.pop()<<endl;
    // sp.peek();
    // sp.display();
    cout << "Top value " << sp.stackTop() << endl;
    cout << "Bottom value " << sp.stackBottom() << endl;

    // cout << sp.pop();
    return 0;
}