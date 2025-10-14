
//will have to seperate the odd index and even index node and then have to connect them.....

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

Node* oddevenLL(Node* head){
    Node* odd=head;
    Node* even=head->next;
    Node* firstEven=head->next;
    while(even!=NULL&&even->next!=NULL){
        odd->next=odd->next->next;
        odd=odd->next;
        even->next=even->next->next;
        even=even->next;
    }
    odd->next=firstEven;
    return head;
}

int main(){
    vector<int>vec={1,2,3,4,5};
    Node* head=createLL(vec);
    Node* head1=oddevenLL(head);
    Node* temp=head1;
    while(temp){
        cout<<temp->val<<"\n";
        temp=temp->next;
    }
    return 0;
}