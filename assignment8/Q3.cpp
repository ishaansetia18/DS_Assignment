#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data,node* left=nullptr,node* right=nullptr){
        this->data=data;
        this->left=left;
        this->right=right;
    }
};
node* insertIntoBST(node* root,int d){
    if(root==nullptr){
        return new node(d);
    }
    if(root->data<d) root->right=insertIntoBST(root->right,d);
    else root->left=insertIntoBST(root->left,d);
    return root;
}
node* takeInput(node* root){
    int d;
    cout<<"enter data value to insert in BST "<<endl;
    cin>>d;
    while(d!=-1){
        root=insertIntoBST(root,d);
        cin>>d;
    }
    return root;
}
void inorder(node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node* root = nullptr;
    root=takeInput(root);
    inorder(root);
    return 0;
}