#include<bits/stdc++.h>
using namespace std;

bool jump_check(vector<int>& ver){
    int m=0;
    for(int i=0;i<ver.size();i++){
        if(i<=m){
            m=max(m,i+ver[i]);
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main(){
    vector<int>jump={2,2,1,0,4};
    bool ans= jump_check(jump);
    cout<<ans;
    return 0;
}