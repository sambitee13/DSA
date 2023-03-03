#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node* next;

    node (int data){
        this->data = data;
        this -> next = NULL;
    }

    ~node(){
        


    }

};

void insertATHead(node* &head, int d){
    node* temp= new node(d);
    temp->next =head;
    head = temp;

}

void insertATTail(node* &tail,int d){
    node*temp = new node(d);
    tail->next= temp;
    temp=tail;
}

void printLL(node* &head){
    if(head==NULL){
        cout<<"list is empty\n";
        return;

    }
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

void insertATposition(node* &head,node* &tail, int d, int p){
    if(p==1){
        insertATHead(head,d);
        return;
    }

    
    node* curr= head;
    int cnt=1;

    while(cnt<p-1){
        curr=curr->next;
        cnt++;
    }

    if(curr->next==NULL){
        insertATTail(tail,d);
        return;
    }

    node* temp= new node(d);

    temp->next=curr->next;
    curr->next=temp;

}


int main(){

    node* node1 = new node(10);
    node* head= node1;
    node* tail = node1;

    insertATHead(head,9);

    insertATTail(tail,11);

    insertATposition(head,tail,13,3);

    printLL(head);






return 0;
}