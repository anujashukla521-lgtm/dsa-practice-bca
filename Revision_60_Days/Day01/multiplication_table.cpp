// This program prints the multiplication table of a given number from 1 to 10. It uses a function to iterate through a loop and display each multiple in a formatted way, showing n × i = result.

#include<iostream>
using namespace std;


int table(int n){
    for(int i=1;i<=10;i++){
       cout<<n<<"X"<<i<<" = "<<n*i<<endl;
    }
}

int main(){
    int num;
    cout<<"Enter a num: ";
    cin>>num;

    cout<<"Table of"<< num<<endl;
    table(num);
    return 0;
}