#include<iostream>
using namespace std;


int AMinusB(int arr1[],int n,int arr2[],int m){
    int i,j,a;
    for(i=0;i<n;i++){
        a=true;
        for(j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                a=false;
                break;
            }
        }
        if(a){
            cout<<arr1[i]<<" ";
        }
    }    
}


int main(){
    int i,j,n,m;
    cout<<"Enter the size of first array : ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the values : ";
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of second array : ";
    cin>>m;
    int arr2[m];
    cout<<"Enter the values : ";
    for(i=0;i<m;i++){
        cin>>arr2[i];
    }
    AMinusB(arr1,n,arr2,m);
}