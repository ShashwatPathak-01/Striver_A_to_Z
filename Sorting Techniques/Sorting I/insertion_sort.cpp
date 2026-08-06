#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>&ver,int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && ver[j-1]>ver[j]){
            swap(ver[j-1],ver[j]);
            j--;
        }
        cout<<"run\n";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>ver(n);
    for(int i=0;i<n;i++){
        cin>>ver[i];
    }
    insertion_sort(ver,n);
    for(int i=0;i<n;i++)
    cout<<ver[i]<<" ";
    return 0;
}

//the worst time complexity will be O(n^2) and the best caase time complexity will be O(n).....