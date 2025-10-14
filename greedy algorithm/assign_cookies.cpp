#include<bits/stdc++.h>
using namespace std;

int assignCookie(vector<int>& child,vector<int>& parent){
    if(child.size()==0 && parent.size()==0) return 0;
    //sorting of two array
    sort(child.begin(),child.end());
    sort(parent.begin(),parent.end());
    //two pointer at the starting of each array
    int child_left=0;
    int parent_left=0;
    int count=0;
    //loop to iterate each element of array
    while(child_left!=child.size() && parent_left!=parent.size()){
        if(child[child_left]<=parent[parent_left]){
            count++;
            child_left++;
            parent_left++;
        }
        else{
            parent_left++;
        }
    }
    return count;
}

int main(){
    vector<int>child={1,5,3,3,4};
    vector<int>parent={4,2,1,2,1,3};
    int ans=assignCookie(child,parent); //calling the function
    cout<<ans;
    return 0;
}