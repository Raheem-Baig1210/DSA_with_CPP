#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int> arr){
    int n=arr.size();
    int count=1,ans=arr[0];
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        else{
            count=1;
            ans=arr[i];
        }
        if(count>n/2){
            return ans;
        }
    }
    return ans;
}


int main(){
    int i,n;
    vector<int> arr={2,2,1,1,1,2,2,1,1};
    cout<<"The most repeated element in the array is : "<<majorityElement(arr);

    return 0;
}