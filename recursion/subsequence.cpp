#include<bits/stdc++.h>
using namespace std;

void func(int idx,vector<vector<int>>&ver,vector<int>&num,vector<int>&temp){
    if(idx>=num.size()){
        ver.push_back(temp);
        return;
    }
    temp.push_back(num[idx]);
    func(idx+1,ver,num,temp);
    temp.pop_back();
    func(idx+1,ver,num,temp);
}

int main(){
    vector<vector<int>>ver;
    vector<int>num={3,1,2};
    vector<int>temp;
    func(0,ver,num,temp);
    for(int i=0;i<ver.size();i++){
        for(int j=0;j<ver[i].size();j++){
            cout<<ver[i][j];
        }
        cout<<" ";
    }
    return 0;
}