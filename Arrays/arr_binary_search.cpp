#include<iostream>
using namespace std;

class Search{
    public:
    int binarySearch(int arr[], int size, int element){
        int low = 0, high = size - 1, mid;
        while (low<=high){
        mid = (low+high)/2;
           if (arr[mid]==element)
           {
            return mid;
           }
           if(arr[mid]<element){
           low = mid+1;
           }else{
            high = mid-1;
           }
        }
        return -1;
    }
};
int main(){
    int arr[10]={12,23,34,45,56,67,78,89,90};
    int size = 10, element = 34;
    Search bs;
    int index = bs.binarySearch(arr, size, element);
    cout<<element<<" is found at index "<<index<<endl;
    return 0;
}