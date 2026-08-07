#include<bits/stdc++.h>
using namespace std;

void quickSort(vector<int>&ver,int low,int high){
    if(low>=high){
        return;
    }
    int pivot=low;
    int left=low+1;
    int right=high;

    while(left<=right){
        while(left<=high && ver[left]<=ver[pivot]) //run till the value is less than the pivot
        left++;

        while(right>=low && ver[right]>ver[pivot]) //runs till the value is greater than pivot
        right--;

        if(left<right) //if the above two loops break then it means the value need to be swapped
        swap(ver[left],ver[right]);
    }

    swap(ver[right],ver[pivot]);//after the loop we need to swap the pivot and the left pointer

    quickSort(ver,low,right-1);
    quickSort(ver,right+1,high);
}

int main(){
    int n;
    cin>>n;
    vector<int>ver(n);
    for(int i=0;i<n;i++){
        cin>>ver[i];
    }
    quickSort(ver,0,n-1);
    for(int i=0;i<n;i++){
        cout<<ver[i]<<" ";
    }
    return 0;
}