#include<iostream>
using namespace std;
int main(){
    int i,n,a=0,r,p=1;
    cout<<"Enter the number : ";
    cin>>n;
    while(n>0){
        r=n%2;
        a=a+(r*p);
        p=p*2;
        n=n/10;
    }
    cout<<"The decimal form of the given number is : "<<a;
}