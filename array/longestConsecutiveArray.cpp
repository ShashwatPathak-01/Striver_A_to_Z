// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
// Example 3:

// Input: nums = [1,0,1,2]
// Output: 3
 

// Constraints:

// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109

#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums){
    unordered_set<int>st;
    int longest=1;

    for(int i=0;i<nums.size();i++)
    st.insert(nums[i]);

    for(auto s:st){
        if(st.find(s-1)==st.end()){
            int count=1;
            int curr=s;
            while(st.find(curr+1)!=st.end()){
                count++;
                curr++;
            }
            longest=max(longest,count);
        }
    }
    return longest;
}

int main(){
    int n;
    cin>>n;
    vector<int>ver(n);
    for(int i=0;i<n;i++)
    cin>>ver[i];
    int ans=longestConsecutive(ver);
    cout<<ans;
    return 0;
}