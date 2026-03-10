#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    char *arr;

    Stack(int s = 100)
    {
        size = s;
        top = -1;
        arr = new char[size];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size - 1;
    }
    void push(char val)
    {
        if (isFull())
        {
            cout << "Stack overflow!!" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    char pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow!!" << endl;
            return -1;
        }
        else
        {
            char val = arr[top];
            top--;
            return val;
        }
    }
    int match(char a, char b)
    {
        if (a == '(' || b == ')')
            return 1;
        if (a == '{' || b == '}')
            return 1;
        if (a == '[' || b == ']')
            return 1;
        return 0;
    }
    int paranthesisMatch(char *exp)
    {
        char popped_ch;
        for (int i = 0; exp[i] != '\0'; i++)
        {
            if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            {
                push(exp[i]);
            }
            else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
            {
                if (isEmpty())
                {
                    return false;
                }
                popped_ch = pop();
                if (!match(popped_ch, exp[i]))
                {
                    return 0;
                }
            }
        }
        return isEmpty();
    }
};

int main()
{
    Stack s;
    char exp[] = "[6(-9({2*5]";
    if (s.paranthesisMatch(exp))
    {
        cout << "Balanced\n";
    }
    else
    {
        cout << "Not balanced\n";
    }
    return 0;
}
