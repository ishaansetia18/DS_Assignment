#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data,node* left=nullptr,node* right=nullptr){
        this->data = data;
        this->left = left;
        this->right = right;
    }
};



int main(){
    
    return 0;
}