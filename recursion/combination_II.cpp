#include<bits/stdc++.h>
using namespace std;

void find_comb(int idx,vector<int>& nums,vector<vector<int>>& ver,vector<int>& temp,int target){
    if(target==0){
        ver.push_back(temp);
        return;
    }
    for(int i=idx;i<nums.size();i++){
        if(i>idx  && nums[i-1]==nums[i])
        continue;
        if(target-nums[i]<0)
        break;
        temp.push_back(nums[i]);
        find_comb(idx+1,nums,ver,temp,target-nums[i]);
        temp.pop_back();
    }
}

int main(){
    vector<int>nums={1,1,1,2,2};
    vector<vector<int>>ans;
    vector<int>temp;
    find_comb(0,nums,ans,temp,4);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<"\n";
    }
    return 0;
}