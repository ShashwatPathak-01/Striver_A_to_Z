#include<bits/stdc++.h>
using namespace std;

void find_combination(int idx,set<vector<int>>& ver,vector<int>& temp,vector<int>& nums,int target){
    if(target==0){
        ver.insert(temp);
        return;
    }
    if(target<0 || idx>=nums.size())
    return;
    temp.push_back(nums[idx]);
    find_combination(idx+1,ver,temp,nums,target-nums[idx]);
    temp.pop_back();
    find_combination(idx+1,ver,temp,nums,target);
}

int main(){
    set<vector<int>>ver;
    vector<int>temp;
    vector<int>nums={10,1,2,7,6,1,5};
    sort(nums.begin(),nums.end());
    find_combination(0,ver,temp,nums,8);
    vector<vector<int>>ver1;
    int j=0;
    for(const auto& row:ver){
        for(size_t i=0;i<row.size();i++){
            ver1[j].push_back(row[i]);
        }
    }
    for(int i=0;i<ver1.size();i++){
        for(int x=0;x<ver1[i].size();x++)
        cout<<ver1[i][x];
        cout<<"\n";
    }
    return 0;
}