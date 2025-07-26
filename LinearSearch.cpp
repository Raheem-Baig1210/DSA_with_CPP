#include<iostream>
using namespace std;
int main(){
    int i,n,a;
    cout<<"Enter the size of an array to start Linear search : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to search in an array : ";
    cin>>a;
    int b=true;
    for(i=0;i<n;i++){
        if(arr[i]==a){
            cout<<"Element found at index "<<i;
            b=false;
            break;
        }
    }
    if(b){
        cout<<"Element not found ..!!!!";
    }
}