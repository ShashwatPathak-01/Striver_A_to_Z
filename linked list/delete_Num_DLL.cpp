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

Node* deletion(Node* head,int num){
    Node* curr=head;
    while(curr){
        if(curr->val==num){
            if(curr==head)
            head=head->next;

            Node* front=curr->next;
            Node* back=curr->prev;

            if(front)
            front->prev=back;
            if(back)
            back->next=front;

            free(curr);
            curr=front;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}

int main(){
    vector<int>v={10,2,10,3,4,10,5};
    Node* head=creatingDLL(v);
    Node* temp=head;
    for(Node* i=temp;i!=NULL;i=i->next){
        cout<<i->val<<"\n";
    }
    cout<<"after deletion \n";
    Node* head1=deletion(head,10);
    Node* temp1=head1;
    for(Node* i=temp1;i!=NULL;i=i->next){
        cout<<i->val<<"\n";
    }
    return 0;
}