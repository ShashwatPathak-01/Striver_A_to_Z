#include<bits/stdc++.h>
using namespace std;

bool check_palin(string st,int l,int r){
    if(l>=r)
    return true;
    if(st[l]!=st[r])
    return false;
    return (st,++l,--r);
}

int main(){
    string st;
    cin>>st;
    int l=0,r=st.size()-1;
    bool ans=check_palin(st,l,r);
    cout<<ans;
    return 0;
}