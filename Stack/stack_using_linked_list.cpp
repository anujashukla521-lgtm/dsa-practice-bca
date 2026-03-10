#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *top = NULL;
void display(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Elements " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int isEmpty(Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(Node *top)
{
    Node *n = new Node;
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}
Node *push(Node *top, int data)
{
    if (isFull(top))
    {
        cout << "Stack overflow!!" << endl;
    }
    else
    {
        Node *ptr = new Node;
        ptr->data = data;
        ptr->next = top;
        top = ptr;
        return top;
    }
}
int pop(Node *tp)
{
    if (isEmpty(tp))
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        Node *ptr = tp;
        top = tp->next;
        int x = ptr->data;
        delete ptr;
        return x;
    }
}
int peek(int pos)
{
    Node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    return -1;
}
int main()
{
    top = push(top, 79);
    top = push(top, 82);
    top = push(top, 19);
    top = push(top, 67);
    display(top);
    // int element = pop(top);
    // printf("Popped element is %d\n", element);
    // display(top);
    for (int i = 1; i <= 4; i++)
    {
        cout << "Element at position " << i << " is " << peek(i) << endl;
    }
    return 0;
}
