#include <iostream>
using namespace std;

class Stack {
public:
    int size;
    int top;
    int *arr;

    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[size];
    }

    int isEmpty() {
        return top == -1;
    }

    int isFull() {
        return top == size - 1;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(6);
    // s.arr[0] = 4;
    // s.top++;

    if (s.isEmpty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";
    return 0;
}
