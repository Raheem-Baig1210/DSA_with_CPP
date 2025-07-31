#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int i,n,k;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Kth element : ";
    cin>>k;
    for(i=0;i<n;i++){
        if(k==1){
            int max=*max_element(arr.begin(),arr.end());
            cout<<"Kth largest element from the given array is : "<<max;
            break;
        }else{
            k=k-1;
            int max=*max_element(arr.begin(),arr.end());
            arr.erase(remove(arr.begin(),arr.end(),max));
        }
    }
}