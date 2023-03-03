#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node* next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }

};
void insertAtbegin(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}

void insertAtend(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtposition(node* &head,node* &tail,int d,int position){
    if(position==1){
        insertAtbegin(head,d);
    }

    node* curr=head;
    int cnt=1;
    while(cnt!=position-1){
        curr=curr->next;
        cnt++;
    }

    if(curr->next==NULL){
        insertAtend(tail,d);
    }

    node* temp =new node(d);
    temp->next=curr->next;
    curr->next=temp;
}

void printll(node* head){
    if(head==NULL){
        cout<<"LL is empty";
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){

    node* n=new node(10);
    node* head= n;
    node* tail =n;

    insertAtbegin(head,30);
    insertAtend(tail,20);
    insertAtposition(head,tail,44,3);
    printll(head);
return 0;
}