#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" number of elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The unique values are : ";
    for(i=0;i<n;i++){
        a=true;
        for(j=0;j<n;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    a=false;
                    break;
                }
        }
        }
        if(a){
            cout<<arr[i]<<" ";
        }
    }
}
