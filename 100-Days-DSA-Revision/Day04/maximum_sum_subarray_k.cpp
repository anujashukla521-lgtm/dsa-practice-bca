#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2,1,5,3,1,2};
    int k = 3;

    int sum = 0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int maxSum = sum;
    for(int i = k;i<arr.size();i++){
        sum-=arr[i-k];
        sum+=arr[i];
        if(sum>maxSum){
        maxSum = sum;
    }
    }
    
    cout<<maxSum<<" ";
    return 0;
}