#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows){
    vector<int>prev;
    vector<vector<int>>result;
    for(int i=0;i<numRows;i++){
        vector<int>curr(i+1,1);
        for(int j=1;j<i;j++){
            curr[j]=curr[j-1]+prev[j];
        }
        result.push_back(curr);
        prev=curr;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>ans=generate(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        cout<<ans[i][j];
        cout<<"\n";
    }
    return 0;
}