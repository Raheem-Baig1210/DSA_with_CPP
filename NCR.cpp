#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}


int main(){
    int n,r;
    cout<<"Enter the values of n and r : ";
    cin>>n>>r;
    int factn,factr,factnr;
    factn=fact(n);
    factr=fact(r);
    factnr=fact(n-r);
    int den = factr*factnr;
    int ncr=factn/den;
    cout<<"ncr of the given numbers is : "<<ncr;
}