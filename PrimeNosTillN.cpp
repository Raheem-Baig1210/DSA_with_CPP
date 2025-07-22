#include<iostream>
using namespace std;

int isPrime(int n){
    int prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}

int main (){
    int n;
    cout<<"Enter the last number till where you want prime numbers : ";
    cin>>n;
    cout<<"The Prime number from 2 to "<<n<<" are : \n";
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}