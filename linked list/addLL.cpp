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

Node* reverseLL(Node* head){
    Node* pre=NULL;
    Node* curr=head;
    Node* next=NULL;
    while(curr){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    return pre;
}

Node* addLL(Node* head,Node* head1){
    int carry=0;
    Node* temp1=head;
    Node* temp2=head1;
    Node* newHead=new Node(-1);
    Node* newTemp=newHead;
    while(temp1!=NULL || temp2!=NULL){
        int sum=carry;
        if(temp1){
            sum+=temp1->val;
            temp1=temp1->next;
        }
        if(temp2){
            sum+=temp2->val;
            temp2=temp2->next;
        }
        carry=sum/10;
        Node* newNode=new Node(sum%10);
        newTemp->next=newNode;
        newTemp=newNode;
    }
    return newHead->next;
}

int main(){
    vector<int>ver={1,5,2,3};
    Node* head=createNode(ver);
    vector<int>ver1={1,0,1};
    Node* head1=createNode(ver1);
    Node* head2=addLL(head,head1);
    Node*temp=head2;
    while(temp){
        cout<<temp->val<<"\n";
        temp=temp->next;
    }
    return 0;
}