#include<bits/stdc++.h>
using namespace std;

void checkFibonacci(vector<int>&ver,int n){
    if(ver.size()>=n)
    return;
    int index=ver.size()-1;
    ver.push_back(ver[index]+ver[index-1]);
    checkFibonacci(ver,n);
}

int main(){
    int n;
    cin>>n;
    vector<int>ver;
    ver.push_back(0);
    ver.push_back(1);
    checkFibonacci(ver,n);
    for(int i=0;i<ver.size();i++)
    cout<<ver[i];
    return 0;
}