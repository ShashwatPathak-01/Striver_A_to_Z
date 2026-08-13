// we are given two array and we have to sort it. the sorting works as follows ...
// the odd numbers will be arranged first in decending order and then we have to sort the even
// numbers in ascending order ....

// eg: 1 2 3 4 5 6 7
// output: 7 5 3 1 2 4 6

#include<bits/stdc++.h>
using namespace std;

vector<int>sortArray(vector<int>&nums){
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==1){
            int temp=nums[i]*-1;
            nums[i]=temp;
        }
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            nums[i]*=-1;
        }else{
            break;
        }
    }
    return nums;
}

int main(){
    int n;
    cin>>n;
    vector<int>ver1(n);
    for(int i=0;i<n;i++)
    cin>>ver1[i];
    vector<int>ans=sortArray(ver1);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}