#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    public:
    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};

Node* creatingDLL(vector<int>& vec){
    Node* head=new Node(vec[0]);
    Node* temp=head;
    for(int i=1;i<vec.size();i++){
        Node* temp1=new Node(vec[i]);
        temp->next=temp1;
        temp1->prev=temp;
        temp=temp1;
    }
    return head;
}

Node* reverseDLL(Node* head){
    
}

int main(){
    vector<int>v={1,2,3,4,5};
    Node* head=creatingDLL(v);
    Node* temp=head;
    for(Node* i=temp;i!=NULL;i=i->next){
        cout<<i->val<<"\n";
    }
    Node* head1=reverseDLL(head);
    return 0;
}