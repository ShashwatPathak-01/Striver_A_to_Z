#include<bits/stdc++.h>
using namespace std;

int palin(int num){
    if(num<=1)
    return num;
    int num1=palin(num-1);
    int num2=palin(num-2);
    return num1+num2;
}
int main(){
    int n;
    cin>>n;
    int ans=palin(n);
    cout<<ans;
    return 0;
}