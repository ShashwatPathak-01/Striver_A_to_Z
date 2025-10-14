#include<bits/stdc++.h>
using namespace std;

void back_tracking(int i,int n){
    if(i>n){
        return;
    }
    back_tracking(i+1,n);
    cout<<i;
}

int main(){
    int n;
    cin>>n;
    back_tracking(1,n);
    return 0;
}