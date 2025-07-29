#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers in the array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int a=0;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            a=a+arr[end];
            if(sum<a){
                sum=a;
            }
        }a=0;
    }
    cout<<"Maximum sum of the sub array is : "<<sum;
}