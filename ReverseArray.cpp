#include<iostream>
using namespace std;

int reverseArray(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}


int main(){
    int i,n,m;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Original array : ";
    for(i=0;i<n;i++){
        cout<<arr[i];   
    }
    reverseArray(arr,n);
    cout<<endl;
    cout<<"Reversed Array : ";
    for(i=0;i<n;i++){
        cout<<arr[i];   
    }
}