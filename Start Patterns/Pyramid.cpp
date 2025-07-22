#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,n;
    cout<<"Enter the height of the pyramid : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<k;
        }
        for(l=i-1;l>0;l--){
            cout<<l;
        }
        cout<<endl;
    }
}