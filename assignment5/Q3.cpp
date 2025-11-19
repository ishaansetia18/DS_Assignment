#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data,node* next = nullptr){
        this->data = data;
        this->next = next;
    }
};
node* create_node(node* head,int a[],int n){
    node* curr = head;
    for(int i=1;i<n;i++){
        curr->next = new node(a[i]);
        curr = curr->next;
    }
    return head;
}
node* question(node* head){
    node* slowptr =head;
    node* fastptr = head;
    while(fastptr->next!=nullptr){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }
    cout<<slowptr->data;
    return head;
}
void display(node* head){
    if(head==nullptr){
        cout<<"linked list is empty "<<endl;
        return;
    }
    node* curr = head;
    while(curr!=nullptr){
        cout<<curr->data<<"->";
        curr = curr->next;
    }
    cout<<"NULL"<<endl;
    return;
}
int main(){
    int a[] = {1,2,3,4,5};
    node* head = new node(a[0]);
    head = create_node(head,a,5);
    head = question(head);
    delete[] head;
    return 0;
}