#include<iostream>
using namespace std;
int main(){
    int i,n,a=0,p=1,r;
    cout<<"Enter the number : ";
    cin>>n;
    while(n>0){
        r=n%2;
        n=n/2;
        a=a+(r*p);
        p=p*10;
    }
    cout<<"The binary form of the given number : "<<a;
}