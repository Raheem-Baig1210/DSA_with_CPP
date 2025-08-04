#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in the array : ";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int min=*min_element(arr.begin(),arr.end());
    int isTrue=false;
    for(i=0;i<n;i++){
        if(arr[i]==min || isTrue){
            int max=*max_element(arr.begin(),arr.end());
            cout<<"min: "<<min<<"max : "<<max<<endl;
            cout<<"Maximum profit is : "<<max-min;
            return 0;
        }
    }
    return 0;
}