#include<iostream>
#include<queue>
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
    // base case
    if(root==nullptr){
        return new node(d);
    }
    if(d>root->data){
        root->right=insertIntoBST(root->right,d);
    }
    else{
        root->left=insertIntoBST(root->left,d);
    }
    return root;
}
node* TakeInput(node* root){
    int data;
    cout<<"-1 for exiting inputs "<<endl;
    cin >> data;
    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
    return root;
}
void preorder(node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root){
    if(root==nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root = nullptr;
    cout<<"enter data to create BST "<<endl;
    root = TakeInput(root);
    cout<<"Preorder of BST "<<endl;
    preorder(root);
    cout<<"\nInorder of BST "<<endl;
    inorder(root);
    cout<<"\nPostorder of BST"<<endl;
    postorder(root);
    delete[] root;
    return 0;
}