#include<iostream>
using namespace std;

int sumToN(int n){
    if(n==0){
        return 0;
    }else{
        return n+sumToN(n-1);
    }
}


int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    int sum = sumToN(a);
    cout<<"Sum of numbers between 1 to "<<a<<" is "<<sum;
}