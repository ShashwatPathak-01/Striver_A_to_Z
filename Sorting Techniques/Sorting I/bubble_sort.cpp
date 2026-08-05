#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>&ver,int n){
    while(n--){
        for(int i=0;i<n;i++){
            if(ver[i]>ver[i+1]){
                swap(ver[i],ver[i+1]);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>ver(n);
    for(int i=0;i<n;i++)
    cin>>ver[i];
    bubble_sort(ver,n);
    for(int i=0;i<n;i++)
    cout<<ver[i]<<" ";
    return 0;
}