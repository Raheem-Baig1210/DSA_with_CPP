#include<iostream>
using namespace std;


int main(){
    int i,n,a=0,b=1,s=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<s;
        a=b;
        b=s;
        s=a+b;
        cout<<endl;
    }

}