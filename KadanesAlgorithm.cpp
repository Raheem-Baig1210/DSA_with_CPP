#include<iostream>
using namespace std;
int main(){
    int i,n=7,csum=0,msum=0;
    int arr[7]={3,-4,5,4,-1,7,-8};
    for(i=0;i<n;i++){
        csum+=arr[i];
        msum=max(msum,csum);
        if(csum<0){
            csum=0;
        }
    }
    cout<<msum;
}