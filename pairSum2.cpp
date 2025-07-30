#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums,int sum){
    int n=nums.size();
    vector<int> ans={};
    int i=0;
    int j=n-1;
    while(i<j){
        if(nums[i]+nums[j]==sum){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }else if(nums[i]+nums[j]>sum){
            j=j-1;
        }else {
            i=i+1;
        }
    }
}


int main(){
    int i,sum=18;
    vector<int> nums={2,7,11,15};
    vector<int> ans=pairSum(nums,sum);
    cout<<"Pair whose sum is equal to given target is : "<<ans[0]<<" "<<ans[1];
    return 0;
}