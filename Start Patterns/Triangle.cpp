#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,n,m,spaces;
    cout<<"Enter the Height of th Triangle : ";
    cin>>n;
    m=1;
    for(i=0;i<=n && m<=n;i++){
        m=1;
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(k=0;k<=i;k++){
            cout<<m;
            m++;
        }
        cout<<endl;
    }
}