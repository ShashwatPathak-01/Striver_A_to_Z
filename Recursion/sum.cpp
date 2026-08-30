#include<bits/stdc++.h>
using namespace std;

int addNum(int n,int sum,int target){
    if(target>n)
    return sum;
    sum+=target;
    return addNum(n,sum,target+=1);
}

int main(){
    int n;
    cin>>n;
    int ans=addNum(n,0,1);
    cout<<ans;
    return 0;
}