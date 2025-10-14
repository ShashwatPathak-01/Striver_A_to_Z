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

pair<Node*, Node*> comonNode(vector<int>&ver,Node* head1,Node* head2){
    Node* tail1=head1;
    Node* tail2=head2;
    while(tail1->next!=NULL)
    tail1=tail1->next;
    while(tail2->next!=NULL)
    tail2=tail2->next;
    for(int i=0;i<ver.size();i++){
        Node* temp=new Node(ver[i]);
        tail1->next=temp;
        tail2->next=temp;
        tail1=temp;
        tail2=temp;
    }
    return {head1,head2};
}

bool checkIntersection(Node* head1,Node* head2){
    if(head1==head2)
    return true;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;

        if(temp1==temp2)
        return true;

        if(temp1==NULL)
        temp1=head2;
        if(temp2==NULL)
        temp2=head1;
    }
    return false;
}

// Node* reverseLL(Node* head){
//     Node* pre=NULL;
//     Node* curr=head;
//     Node* next=NULL;
//     while(curr){
//         next=curr->next;
//         curr->next=pre;
//         pre=curr;
//         curr=next;
//     }
//     return pre;
// }

int main(){
    vector<int>ver={1,5,2,3};
    Node* head1=createNode(ver);
    vector<int>ver1={1,2,3};
    Node* head2=createNode(ver1);
    // vector<int>ver3={9,8,7};
    // Node* head3; Node* head4;
    // tie(head3, head4) = comonNode(ver3, head1, head2);
    bool check=checkIntersection(head1,head2);
    cout<<check;
    return 0;
}