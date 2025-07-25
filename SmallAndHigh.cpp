#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter random "<<n<<" elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0],max=0,a,b;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Smallest number from the given array : "<<min<<endl;
    cout<<"Highest number from the given array : "<<max;
}