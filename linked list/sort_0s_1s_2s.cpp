#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    public:
    Node(int data){
        val=data;
        next=NULL;
    }
};

Node* createNode(vector<int>&ver){
    Node* head=new Node(ver[0]);
    Node* temp=head;
    for(int i=1;i<ver.size();i++){
        Node* curr=new Node(ver[i]);
        temp->next=curr;
        temp=curr;
    }
    return head;
}

// Node* sort012s(Node* head){
//     int zero=0,one=0,two=0;
//     Node* temp=head;
//     while(temp){
//         if(temp->val==0){
//             zero++;
//         }
//         else if(temp->val==1){
//             one++;
//         }
//         else{
//             two++;
//         }
//         temp=temp->next;
//     }
//     temp=head;
//     while(temp){
//         if(zero>0){
//             temp->val=0;
//             zero--;
//         }
//         else if(one>0){
//             temp->val=1;
//             one--;
//         }
//         else{
//             temp->val=2;
//             two--;
//         }
//         temp=temp->next;
//     }
//     return head;
// }

Node* sort012s(Node* head){
    Node* temp=head;
    Node* zeroHead=new Node(-1);
    Node* oneHead=new Node(-1);
    Node* twoHead=new Node(-1);
    Node* zero=zeroHead;
    Node* one=oneHead;
    Node* two=twoHead;
    while(temp){
        if(temp->val==0){
            zero->next=temp;
            zero=temp;
        }
        else if(temp->val==1){
            one->next=temp;
            one=temp;
        }
        else{
            two->next=temp;
            two=temp;
        }
        temp=temp->next;
    }
    zero->next=(oneHead->next)?oneHead->next:twoHead->next;
    one->next=twoHead->next;
    two->next=NULL;
    head=zeroHead->next;
    free(zeroHead);
    free(oneHead);
    free(twoHead);
    return head;
}

int main(){
    vector<int>ver={1,1,0,2,0,2,1,0,2};
    Node* head=createNode(ver);
    Node* head1=sort012s(head);
    Node*temp=head1;
    while(temp){
        cout<<temp->val<<"\n";
        temp=temp->next;
    }
    
    return 0;
}