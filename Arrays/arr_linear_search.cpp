#include<iostream>
using namespace std;

class Search{
    public:
    int linearSearch(int arr[], int size, int element){
        for (int i = 0; i <size; i++)
        {
           if (arr[i]==element)
           {
           return i;
           }
        }
        return -1;
    }
};
           
int main(){
    int arr[10] = {34,7,12,98,45,7,5,};
    int size =10, element = 98, index;
    Search ls;
    index =  ls.linearSearch(arr, size, 98);
    cout<<element <<" is found at index "<<index<<endl;
    return 0;
}
