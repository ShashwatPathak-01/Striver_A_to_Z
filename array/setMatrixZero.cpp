// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.

// ex1: Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

// ex2: Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
    int row=matrix.size();
    int cols=matrix[0].size();
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==0){
                // for rows 
                for(int k=0;k<cols;k++){
                    if(matrix[i][k]!=0)
                    matrix[i][k]=-1;
                }
                // for columns
                for(int k=0;k<row;k++){
                    if(matrix[k][j]!=0)
                    matrix[k][j]=-1;
                }
            }
        }
    }

    // convert all the -1 into zero.....
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==-1)
            matrix[i][j]=0;
        }
    }
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int rows,cols;
    cin>>rows>>cols;
    vector<vector<int>> ver(rows, vector<int>(cols));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
        cin>>ver[i][j];
    }
    setZeroes(ver);
    return 0;
}