#include<bits/stdc++.h>
using namespace std;

double find_avg(vector<int>& ver){
    sort(ver.begin(),ver.end());
    int sum=0,start_time=0;
    for(int i=0;i<ver.size();i++){
        sum+=start_time;
        start_time+=ver[i];
    }
    return (sum/ver.size());
}

int main(){
    vector<int>ver={4,3,7,1,2};
    double ans=find_avg(ver);
    cout<<ans;
    return 0;
}