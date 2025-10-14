#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    public:
    Node(int data,Node* next1){
        val=data;
        next=next1;
    }

    public:
    Node(int data){
        val=data;
        next=NULL;
    }
};

Node* convertarrtoLL(vector<int>&vec){
    Node* head=new Node(vec[0]);
    Node* mover=head;
    for(int i=1;i<vec.size();i++){
        Node* temp=new Node(vec[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* reverseLL(Node* head){
    Node* curr=head;
    Node* next=NULL;
    Node* prev=NULL;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main(){
    vector<int>vec={1,2,3,4,5};
    Node* head=convertarrtoLL(vec);
    // Node* temp=head;
    // for(Node* i=temp;i!=NULL;i=i->next){
    //     cout<<i->val<<"\n";
    // }
    Node* head1=reverseLL(head);
    Node* temp=head1;
    for(Node* i=temp;i!=NULL;i=i->next){
        cout<<i->val<<"\n";
    }
    return 0;
}