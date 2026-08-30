#include<bits/stdc++.h>
using namespace std;

void reverseArr(vector<int>& ver,int left,int right){
    if(left>right)
    return;
    swap(ver[left],ver[right-1]);
    return reverseArr(ver,left+=1,right-=1);
}

int main(){
    int num;
    cin>>num;
    vector<int>ver(num);
    for(int i=0;i<num;i++){
        cin>>ver[i];
    }
    reverseArr(ver,0,num);
    for(int i=0;i<num;i++)
    cout<<ver[i]<<" ";
    return 0;
}