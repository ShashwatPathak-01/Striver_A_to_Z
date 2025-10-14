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

Node* createLL(vector<int>& v){
    Node* head=new Node(v[0]);
    Node* temp=head;
    for(int i=1;i<v.size();i++){
        Node* curr=new Node(v[i]);
        temp->next=curr;
        temp=curr;
    }
    return head;
}

// Node* deleteFromBack(Node* head,int n){
//     int count=0;
//     Node* temp=head;
//     while(temp){
//         count++;
//         temp=temp->next;
//     }
//     count-=n;
//     if(count==0){
//         Node* del_head=head;
//         head=head->next;
//         free(del_head);
//         return head;
//     }
//     temp=head;
//     for(int i=1;i<count;i++){
//         temp=temp->next;
//     }
//     Node* del_temp=temp->next;
//     temp->next=temp->next->next;
//     free(del_temp);
//     return head;
// }

Node* deleteFromBack(Node* head,int n){
    Node* fast=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    Node* slow=head;
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    Node* del_Node=slow->next;
    slow->next=slow->next->next;
    free(del_Node);
    return head;
}

int main(){
    vector<int>vec={1,2,3,4,5};
    Node* head=createLL(vec);
    Node* head1=deleteFromBack(head,2);
    Node* temp=head1;
    while(temp){
        cout<<temp->val<<"\n";
        temp=temp->next;
    }
    return 0;
}