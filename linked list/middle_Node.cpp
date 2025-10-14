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

Node* middleNode(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL&& fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main(){
    vector<int>ver={1,5,2,3,4};
    Node* head=createNode(ver);
    Node*temp=head;
    while(temp){
        cout<<temp->val<<"\n";
        temp=temp->next;
    }
    Node* middle=middleNode(head);
    cout<<"middle node is : "<<middle->val;
    return 0;
}