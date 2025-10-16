#include<bits/stdc++.h>
using namespace std;

bool func(int k,int idx,vector<vector<int>>&ver,vector<int>&num,vector<int>&temp){
    if(idx>=num.size()){
        int sum=0;
        for(int i=0;i<temp.size();i++){
            sum+=temp[i];
        }
        if(sum==k){
            ver.push_back(temp);
            return true;
        }
        else
        {
            return false;
        }
    }
    temp.push_back(num[idx]);
    if(func(k,idx+1,ver,num,temp)==true);
    return true;
    temp.pop_back();
    if(func(k,idx+1,ver,num,temp)==true)
    return true;
    return false;
}

int main(){
    vector<vector<int>>ver;
    vector<int>num={1,2,1};
    vector<int>temp;
    bool ans=func(2,0,ver,num,temp);
    for(int i=0;i<ver.size();i++){
        for(int j=0;j<ver[i].size();j++){
            cout<<ver[i][j];
        }
        cout<<" ";
    }
    return 0;
}