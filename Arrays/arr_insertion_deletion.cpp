// “This program implements an Array ADT supporting insertion, deletion, and traversal. The logical size is managed separately from physical capacity, and all operations are performed in-place.”

#include <iostream>
using namespace std;

class ArrayADT {
public:
    void display(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Insert element at given index
    int insert(int arr[], int size, int capacity, int index, int element) {
        if (size >= capacity) {
            cout << "Insertion failed! Array is full." << endl;
            return size;
        }

        if (index < 0 || index > size) {
            cout << "Invalid index!" << endl;
            return size;
        }

        for (int i = size - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }

        arr[index] = element;
        return size + 1;
    }

    // Delete element at given index
    int remove(int arr[], int size, int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index!" << endl;
            return size;
        }

        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        return size - 1;
    }
};

int main() {
    int arr[15] = {12, 14, 34, 56, 38, 67};
    int size = 6;
    int capacity = 15;

    ArrayADT adt;

    cout << "Initial Array:" << endl;
    adt.display(arr, size);

    cout << "\nInsertion:" << endl;
    size = adt.insert(arr, size, capacity, 2, 21);
    adt.display(arr, size);

    cout << "\nDeletion:" << endl;
    size = adt.remove(arr, size, 3);
    adt.display(arr, size);

    return 0;
}
