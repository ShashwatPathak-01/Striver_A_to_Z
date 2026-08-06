#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&ver,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(ver[left]<=ver[right]){
            temp.push_back(ver[left]);
            left++;
        }else{
            temp.push_back(ver[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(ver[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(ver[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        ver[i]=temp[i-low];
    }
}

void merge_sort(vector<int>&ver,int low,int high){
    if(low==high)
    return;
    int mid=(low+high)/2;
    merge_sort(ver,low,mid);
    merge_sort(ver,mid+1,high);
    merge(ver,low,mid,high);
}

int main(){
    int n;
    cin>>n;
    vector<int>ver(n);
    for(int i=0;i<n;i++){
        cin>>ver[i];
    }
    merge_sort(ver,0,n-1);
    for(int i=0;i<n;i++){
        cout<<ver[i]<<" ";
    }
    return 0;
}