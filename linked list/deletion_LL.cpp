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
    Node* pre=NULL;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL&& fast->next!=NULL){
        pre=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    pre->next=slow->next;
    free(slow);
    return head;
}

int main(){
    vector<int>ver={1,5,2,3,4,8};
    Node* head=createNode(ver);
    Node*temp=head;
    while(temp){
        cout<<temp->val<<"\n";
        temp=temp->next;
    }
    Node* middle=middleNode(head);
    temp=middle;
    cout<<"After deletion of middle node\n";
    while(temp){
        cout<<temp->val<<"\n";
        temp=temp->next;
    }
    return 0;
}
