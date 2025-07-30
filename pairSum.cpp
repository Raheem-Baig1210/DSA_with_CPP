#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int sum){
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==sum){
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    return ans;
                }
            }
        }
        vector<int> s={0};
        return s;
}

int main(){
    int i,n,m,a;
    vector<int> nums={2,7,11,15};
    int sum=6;

    vector<int> ans= pairSum(nums,sum);
    if(ans[0]==0){
        cout<<"There is no such pair whose sum is equal to sum"<<sum;
    }
    else{
    cout<<"Pair of elements who's sum is equal to the target is : "<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}