// Array deletion using index
// Element shifting in static arrays
// Logical vs physical size of an array
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

class Deletion{
    public:
    void display(int arr[], int n){
        for (int i = 0; i <n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int delAtIndex(int arr[], int size, int index){
        if(index<0||index>=size){
            cout<<"Invalid index!!";
            return size;
        }
        for (int i = index; i <size-1; i++)
        {
           arr[i] = arr[i+1];
        }
        return size-1;
    }
};
int main(){
    int arr[10] ={1,2,3,4,6,5};
    int size = 6, index = 4;
    Deletion del;
    del.display(arr,size);
    del.delAtIndex(arr,size,index);
    size-=1;
    del.display(arr,size);
    return 0;
}
        






