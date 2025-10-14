#include<bits/stdc++.h>
using namespace std;
//used parameter
// void sum_number(int i,int num,int& sum){
//     if(i>num)
//     return;
//     sum+=i;
//     sum_number(i+1,num,sum);
// }

//using function that return val
int sum_number(int num){
    if(num<0)
    return 0;
    return num+sum_number(num-1);
}

int main(){
    int n;
    cin>>n;
    int ans=sum_number(n);
    cout<<ans;
    return 0;
}