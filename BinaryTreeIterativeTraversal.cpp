#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this-> right =NULL;
    }
};
node* buildTree(node* root){
    int data;
    cout<<"enter data : ";
    cin>>data;
    root= new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter data for inserting in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;

}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}
void PreOrderTraversal(node* root){
    if(root==NULL) return;
    stack<node*>s;
    s.push(root);
    while(!s.empty()){
        root=s.top();
        s.pop();
        cout<<root->data<<" ";
        if(root->right){
            s.push(root->right);
        }
        if(root->left){
            s.push(root->left);
        }
    }
}
void InOrderTraversal(node* root){
    if(root==NULL) return ;

    stack<node*>s;
    node* temp=root;
    while(true){
        if(temp!=NULL){
            s.push(temp);
            temp=temp->left;
        }
        else{
            if(s.empty()==true) break;
            temp=s.top();
            s.pop();
            cout<<temp->data<<" ";
            temp=temp->right;
        }
    }
}

void PostOrderTraversal(node* root){
    if(root==NULL) return;
    stack<node*>s;
    node* curr=root;
    while(curr != NULL || !s.empty()){
        if(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        else{
            node* temp=s.top()->right;
            if(temp==NULL){
                temp=s.top();
                s.pop();
                cout<<temp->data<<" ";
                while(!s.empty() && temp==s.top()->right){
                    temp=s.top();
                    s.pop();
                    cout<<temp->data<<" ";
                }
            }
            else{
                curr=temp;
            }
        }
    }
}

int main(){
    node* root =NULL;
    root=buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"nodes in the binary tree is \n";
    cout<<"Level order traversal is"<<endl;
    levelOrderTraversal(root);
    cout<<"Pre order traversal is ";
    PreOrderTraversal(root);
    cout<<endl;
    cout<<"In order traversal is ";
    InOrderTraversal(root);
    cout<<endl;
    cout<<"Post order traversal is ";
    PostOrderTraversal(root);
    cout<<endl;

return 0;
}