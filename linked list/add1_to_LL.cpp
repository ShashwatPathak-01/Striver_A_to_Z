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

Node* addOne(Node* head){
    int carry=1;
    Node* temp=head;
    Node* newHead=reverseLL(temp);
    Node* newTemp=newHead;
    while(newTemp){
        int sum=newTemp->val+carry;
        if(sum<9){
            newTemp->val=sum;
            reverseLL(newHead);
            return head;
        }
        newTemp->val=0;
        newTemp=newTemp->next;
    }
    Node* newNode=new Node(carry);
    newNode->next=temp;
    head=newNode;
    reverseLL(newHead);
    return head;
}

int main(){
    vector<int>ver={9,9,9};
    Node* head=createNode(ver);
    Node* head1=addOne(head);
    Node*temp=head1;
    while(temp){
        cout<<temp->val<<"\n";
        temp=temp->next;
    }
    return 0;
}