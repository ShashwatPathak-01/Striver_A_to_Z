#include<bits/stdc++.h>
using namespace std;

bool selling_lamonade(vector<int>& ver){
    int five=0,ten=0,twy=0;
    for(int i=0;i<ver.size();i++){
        if(ver[i]==5){
            five++;
        }
        else if(ver[i]==10 && five>0){
            five--;
            ten++;
        }
        else if(ver[i]==20){
            if(ten>0 && five>0){
                ten--;
                five--;
                twy++;
            }
            else if(five>=3){
                five-=3;
                twy++;
            }
            else
            return false;
        }
        else
        return false;
    }
    return true;
}

int main(){
    vector<int>ver={5,5,5,10,20};
    bool ans=selling_lamonade(ver);
    cout<<ans;
    return 0;
}