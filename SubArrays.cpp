#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i;
    int nums[5]={1,2,3,4,5};
    for(int str=0;str<5;str++){
        for(int end=str;end<5;end++){
            for(i=str;i<end;i++){
                cout<<nums[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}