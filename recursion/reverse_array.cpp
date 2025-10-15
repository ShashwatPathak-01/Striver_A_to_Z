#include<bits/stdc++.h>
using namespace std;

void rev(vector<int>&ver,int l,int r){
    if(l>=r)
    return;
    int temp=ver[l];
    ver[l]=ver[r];
    ver[r]=temp;
    rev(ver,++l,--r);
}

int main(){
    vector<int>ver={1,2,3,4,5};
    int l=0,r=ver.size()-1;
    rev(ver,l,r);
    for(int i=0;i<ver.size();i++)
    cout<<ver[i]<<' ';
    return 0;
}