// In this  question we have to compare the array to other array that its rotational or not

// ex: array1= A B C D array2= C D A B
// output:true


#include<bits/stdc++.h>
using namespace std;

bool findIfEqual(vector<char>&arr1,vector<char>&arr2){
    vector<char>temp=arr1;
    for(int i=0;i<arr1.size();i++)
    temp.push_back(arr1[i]);

    for(int i=0;i<temp.size()-arr1.size();i++){
        bool found=true;
        for(int j=0;j<arr2.size();j++){
            if(temp[i+j]!=arr2[j])
            break;
        }
        if(found)
        return true;
    }
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<char>arr1(n);
    vector<char>arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    bool ans=findIfEqual(arr1,arr2);
    cout<<ans;
    return 0;
}