#include<iostream>
using namespace std;

int swapMinMax(int arr[],int n){
    int min=0,max=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
        else if(arr[i]>arr[max]){
            max=i;
        }
    }
    swap(arr[min],arr[max]);
    return 0;
}

int main(){
    int i,n,a;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before swapping of smallest and highest numbers : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swapMinMax(arr,n);
    cout<<"Array after swapping of smallest and highest numbers : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}