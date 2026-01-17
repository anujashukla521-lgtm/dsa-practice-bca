// Implementation of insertion operation in an array using C++, including index validation and display functionality.

#include<iostream>
using namespace std;

class Insertion{
    public:
    void display(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
           cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
   int indInsertion(int arr[], int size, int element, int capacity, int index){
    if (size>=capacity)
    {
       cout<<"Insertion failed!!"<<endl;
       return -1;
    }
     if (index < 0 || index > size) {
            cout << "Invalid index!" << endl;
            return -1;
        }
    for (int i = size-1; i >=index; i--)
    {
       arr[i+1] =arr[i];
    }
    arr[index] = element;
    cout<<"Insertion successfull!!"<<endl;
    }
};
int main(){
   int arr[10] = {5,8,12,45,78};
   int size = 5, element = 21, index = 3;
   Insertion i;
   i.display(arr, size);
   i.indInsertion(arr, size, element, 10, 3);
   size+=1;
   i.display(arr, size);
   return 0;
}