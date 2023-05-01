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

void preInPostTraversal(node* root,vector<int>& pre,vector<int>& in,vector<int>& post){
    stack<pair<node*,int>> s;
    s.push({root,1});
    if(root==NULL) return;
    while(!s.empty()){
        auto it =s.top();
        s.pop();
        //this is part of pre
        //increment 1 to 2
        //push the left side of the tree
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            s.push(it);

            if(it.first->left ){
                s.push({it.first->left,1});
            }
        }
        //this is part of inOrder
        //increment 2 to 3
        //push the right side of the tree
        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            s.push(it);

            if(it.first->right){
                s.push({it.first->right,1});
            }
        }
        else{
            post.push_back(it.first->data);
        }

    }
}
int main(){
    node* root =NULL;
    root=buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"\nnodes in the binary tree is \n";
    vector<int>pre,post,in;
    
    preInPostTraversal(root,pre,in,post);
    cout<<"Pre order traversal is ";
    for(int i=0;i<pre.size();i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
    cout<<"In order traversal is ";
    for(int i=0;i<in.size();i++){
        cout<<in[i]<<" ";
    }
    cout<<endl;
    cout<<"Post order traversal is ";
    for(int i=0;i<post.size();i++){
        cout<<post[i]<<" ";
    }
    cout<<endl;

return 0;
}