#include<iostream>
using namespace std;
int main(){
    int n,i,isPrime=true;
    cout<<"Enter the number to check it is prime or not : ";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    cout<<(isPrime ? "Given number is Prime Number":"Given number is Not a Prime Number");
}