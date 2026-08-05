#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&ver,int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(ver[j]<ver[min])
            min=j;
        }
        swap(ver[min], ver[i]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>ver(n);
    for(int i=0;i<n;i++){
        cin>>ver[i];
    }
    selectionSort(ver,n);
    for(int i=0;i<n;i++)
    cout<<ver[i]<<" ";
    return 0;
}