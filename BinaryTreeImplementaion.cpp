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
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}
void InOrderTraversal(node* root){
    if(root==NULL) return ;

    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}

void PostOrderTraversal(node* root){
    if(root==NULL) return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
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