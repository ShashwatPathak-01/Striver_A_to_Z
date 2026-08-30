#include<bits/stdc++.h>
using namespace std;

bool isPalin(string str,int left,int right){
    if(left>right)
    return true;

    if(!isalnum(str[left]))
    isPalin(str,++left,right);
    else if(!isalnum(str[right]))
    isPalin(str,left,++right);
    else if(str[left]!=str[right])
    return false;
    else
    return isPalin(str,++left,++right);
}

int main(){
    string str;
    cin>>str;
    bool ans=isPalin(str,0,str.size()-1);
    cout<<ans;
    return 0;
}