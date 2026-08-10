// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.
// but the catch is i have done this question in leetcode numbered 2149....
// so in this we have to arrage the array in alternate sign but the array is not evenly which 
// means there can be diffrent positives and negetives numbers and we have to arrange it
// and whats ever is more we will add it to the last without disturbing the order.
 
// Example 1:

// Input: nums = [3,1,-2,-5,2,-4,3,6,9,-9]
// Output: [3,-2,1,-5,2,-4,3,-9,6,9]

// Example 1:

// Input: nums = [3,1,-2,-5,2,-4]
// Output: [3,-2,1,-5,2,-4]
// Explanation:
// The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
// The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
// Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.  
// Example 2:

// Input: nums = [-1,1]
// Output: [1,-1]
// Explanation:
// 1 is the only positive integer and -1 the only negative integer in nums.
// So nums is rearranged to [1,-1].

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(const vector<int>& nums){
    vector<int> pos, neg;
    vector<int> ans(nums.size());
    for(int x : nums){
        if(x >= 0) pos.push_back(x);   // 0 goes with positives (adjust if needed)
        else neg.push_back(x);
    }
    if(pos.size() > neg.size()){
        for(int i=0;i<(int)neg.size();i++){
            ans[i*2] = pos[i];
            ans[i*2+1] = neg[i];
        }
        int idx = neg.size()*2;
        for(int i=neg.size();i<(int)pos.size();i++) ans[idx++] = pos[i];
    } else {
        for(int i=0;i<(int)pos.size();i++){
            ans[i*2] = pos[i];
            ans[i*2+1] = neg[i];
        }
        int idx = pos.size()*2;
        for(int i=pos.size();i<(int)neg.size();i++) ans[idx++] = neg[i];
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin >> nums[i];
    vector<int> ans = rearrangeArray(nums);
    for(int x : ans) cout << x << " ";
    cout << "\n";
    return 0;
}