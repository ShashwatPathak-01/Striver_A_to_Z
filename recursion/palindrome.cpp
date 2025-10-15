#include<bits/stdc++.h>
using namespace std;

void palin(int num,int num1,int num2){
    if(num==0)
    return;
    int sum=num1+num2;
    cout<<sum<<" ";
    palin(--num,num2,sum);
}

int main(){
    int n;
    cin>>n;
    cout<<0<<" "<<1<<" ";
    palin(n,0,1);
    return 0;
}