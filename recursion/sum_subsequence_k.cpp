#include<bits/stdc++.h>
using namespace std;

void func(int k,int idx,vector<vector<int>>&ver,vector<int>&num,vector<int>&temp){
    if(idx>=num.size()){
        int sum=0;
        for(int i=0;i<temp.size();i++){
            sum+=temp[i];
        }
        if(sum==k)
        ver.push_back(temp);
        return;
    }
    temp.push_back(num[idx]);
    func(k,idx+1,ver,num,temp);
    temp.pop_back();
    func(k,idx+1,ver,num,temp);
}

int main(){
    vector<vector<int>>ver;
    vector<int>num={1,2,1};
    vector<int>temp;
    func(2,0,ver,num,temp);
    for(int i=0;i<ver.size();i++){
        for(int j=0;j<ver[i].size();j++){
            cout<<ver[i][j];
        }
        cout<<" ";
    }
    return 0;
}