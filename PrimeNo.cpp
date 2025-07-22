#include<iostream>
using namespace std;

int isPrime(int n){
    int prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
        }
    }
    return prime;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<(isPrime(n) ? "Given number is Prime Number":"Given number is not a Prime Number");
}