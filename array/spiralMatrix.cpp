#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){
    int top=0,bottom=matrix.size()-1;
    int left=0,right=matrix[0].size()-1;
    vector<int>ans;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        for(int i=right;i>=left;i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>ver(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>ver[i][j];
    }
    vector<int>ans=spiralOrder(ver);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}