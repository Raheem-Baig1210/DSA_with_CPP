#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=0;
    vector<int> nums={1,1,2,2,5};
    for(int i:nums){
        a=a^i;
    }
    cout<<"Single number in the vector is : "<<a;
    
}