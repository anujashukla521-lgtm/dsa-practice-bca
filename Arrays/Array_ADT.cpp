// // Topic: Arrays
// Concept: Array ADT using C++ Class
// Operations: create, input, display
// Time: O(n)
// Space: O(n)

#include<iostream>
using namespace std;

class MyArray {
private:
    int total_size;
    int used_size;
    int* ptr;

public:
    // Constructor
    MyArray(int tSize, int uSize) {
        if (uSize > tSize) {
            cout << "Used size cannot be greater than total size" << endl;
            exit(1);
        }

        total_size = tSize;
        used_size = uSize;
        ptr = new int[total_size];
    }

    // Set values
    void setVal() {
        for (int i = 0; i < used_size; i++) {
            cout << "Enter element " << i << ": ";
            cin >> ptr[i];
        }
    }

    // Display values
    void show() const {
        for (int i = 0; i < used_size; i++) {
            cout << ptr[i] << endl;
        }
    }

    // Destructor
    ~MyArray() {
        delete[] ptr;
    }
};

int main() {
    MyArray marks(10, 2);

    cout << "We are running setVal now!" << endl;
    marks.setVal();

    cout << "We are running show now!" << endl;
    marks.show();

    return 0;
}

  