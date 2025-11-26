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
    cin >> data;
    while(data != -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
    return root;
}
bool search_element_recursion(node* root,int val){
    if(root==nullptr) return false;
    if(root->data==val) return true;
    if(root->data<val) return search_element_recursion(root->right,val);
    else return search_element_recursion(root->left,val);
}
bool search_el_nonRecursion(node* root){
    int el;
    cout<<"enter element to search in BST ";
    cin>>el;
    node* temp = root;
    while(temp!=nullptr){
        if(temp->data==el){
            return true;
        }
        if(temp->data<el){
            temp = temp->right;
        }
        else temp = temp->right;
    }
    return false;
}
int MINval(node* root){
    node* temp = root;
    while(temp->left!=nullptr){
        temp=temp->left;
    }
    return temp->data;
}
int MAXval(node* root){
    node* temp = root;
    while(temp->right!=nullptr){
        temp = temp->right;
    }
    return temp->data;
}
void inorder_successor(node* root){
    int k;
    cout<<"enter node to find inorder successor of ";
    cin>>k;
    node* temp=root;
    bool flag=false;
    while(temp!=nullptr){
        if(temp->data==k){
            flag=true;
            break;
        }
        if(temp->data<k){
            temp=temp->right;
        }
        else temp=temp->left;
    }
    if(flag==false){
        cout<<"given node is not present is BST "<<endl;
        return;
    }
    if(temp->right!=nullptr){
        cout<<"inorder successor of node "<<k<<"  is "<<temp->right->data<<endl;
    }
    else{
        cout<<"given node is maximum node so that no successor "<<endl;
    }
}
void inorder_predecessor(node* root){
    int k;
    cout<<"enter node to find inorder predecessor of ";
    cin>>k;
    node* curr = root;
    node* temp=curr;
    bool flag=false;
    while(curr!=nullptr){
        if(curr->data==k){
            flag=true;
            break;
        }
        if(curr->data<k){
            temp=curr;
            curr=curr->right;
        }
        else{
            temp=curr;
            curr=curr->left;
        }
    }
    if(flag==true){
        cout<<"inorder predecessor of node "<<k<<" is "<<temp->data<<endl;
    }
    else{
        cout<<"Invalid input node "<<endl;
    }
}
int main(){
    node* root = nullptr;
    cout<<"enter data to create BST "<<endl;
    root = TakeInput(root);
    int k;
    cout<<"enter element for searching in bst ";
    cin>>k;
    int ans1 = search_element_recursion(root,k);
    if(ans1==1) cout<<"True"<<endl;
    else cout<<"False";
    int ans2 = search_el_nonRecursion(root);
    if(ans2==1) cout<<"True"<<endl;
    else  cout<<"False"<<endl;
    cout<<"Minimum value of BST is "<<MINval(root)<<endl;
    cout<<"Maximum value of BST is "<<MAXval(root)<<endl;
    inorder_successor(root);
    inorder_predecessor(root);
    delete[] root;
    return 0;
}