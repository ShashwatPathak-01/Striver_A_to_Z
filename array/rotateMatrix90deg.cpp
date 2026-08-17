#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=i;j<matrix[i].size();j++){
            if(i==j)
            continue;
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<matrix.size();i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>ver(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>ver[i][j];
    }
    rotate(ver);

    return 0;
}