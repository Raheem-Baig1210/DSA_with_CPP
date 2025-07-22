#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        for(k=n-i-1;k>0;k--){
            cout<<" ";
        }
        for(k=n-i-1;k>0;k--){
            cout<<" ";
        }
        // cout<<"*";
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=n-i;j>0;j--){
            cout<<"*";
        }
        for(j=1;j<=i;j++){
            cout<<" ";
        }
        for(j=i;j>0;j--){
            cout<<" ";
        }
        for(k=i;k<n-1;k++){
            cout<<"*";
        }
        cout<<"*";
        cout<<endl;
    }
}