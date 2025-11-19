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
    int k;
    cout<<"enter the key ";
    cin>>k;
    int count = 0;
    node* dummy = new node(0);
    node* temp = dummy;
    node* curr = head;
    while(curr!=nullptr){
        if(curr->data!=k){
            temp->next = new node(curr->data);
            temp = temp->next;
            count--;
        }
        curr = curr->next;
        count++;
    }
    node* newhead = dummy->next;
    delete[] dummy;
    cout<<"count: "<<count<<endl;
    return newhead;
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
    int a[] = {1,2,1,2,1,3,1};
    node* head = new node(a[0]);
    head = create_node(head,a,7);
    display(head);
    head = question(head);
    display(head);
    delete[] head;
    return 0;
}