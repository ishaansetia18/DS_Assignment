#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data,node* next=nullptr){
        this->data = data;
        this->next = next;
    }
};
node* create_first_node(node* head){
    int n;
    cout<<"enter data value for head ";
    cin>>n;
    node* newnode = new node(n);
    head = newnode;
    newnode->next = head;
    return head;
}
node* insert_at_head(node* head){
    int n;
    cout<<"enter data value to insert node at head ";
    cin>>n;
    node* temp = new node(n);
    if(head==nullptr){
        temp->next = head;
        head = temp;
        return head;
    }
    node* curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    head = temp;
    return head;
    
}
node* insert_at_end(node* head){
    if(head==nullptr){
        return create_first_node(head);
    }
    int n;
    cout<<"enter value of data to insert at the end of node ";
    cin>>n;
    node* curr = head;
    node* temp = new node(n);
    while(curr->next!=head){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
node* insert_at_k(node* head){
    if(head==nullptr){
        return create_first_node(head);
    }
    int k;
    cout<<"enter position where node to be insert ";
    cin>>k;
    if(k==1){
        cout<<"since it is head , hence new node insert at head "<<endl;
        return insert_at_head(head);
    }
    node* curr = head;
    for(int i=2;i<k;i++){
        if(curr->next==head){
            cout<<"since it is end of linked list "
                <<"new node is now insert at end of list "<<endl;
            return insert_at_end(head);
        }
        curr = curr->next;
    }
    int n;
    cout<<"enter value of new node ";
    cin>>n;
    node* temp = new node(n);
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
node* delete_at_head(node* head){
    if(head==nullptr){
        cout<<"head is already null "<<endl;
        return head;
    }
    node* curr = head;
    node* prev = curr;
    while(prev->next!= head){
        prev = prev->next;
    }
    head = curr->next;
    prev->next = head;
    delete curr;
    cout<<"a node is deleted from head"<<endl;
    return head;
}
node* delete_at_end(node* head){
    if(head==nullptr){
        cout<<"head is already null "<<endl;
        return head;
    }
    node* curr = head;
    node* prev = curr;
    while(curr->next!= head){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
    cout<<"a node is deleted at end of linked list "<<endl;
    return head;
    
}
node* delete_at_k(node* head){
    if(head==nullptr){
        cout<<"node is already empty "<<endl;
        return head;
    }
    int k;
    cout<<"enter position at which node to be delete ";
    cin>>k;
    if(k==1){
        cout<<"since it is head so "<<endl;
        return delete_at_head(head);
    }
    node* curr = head;
    node* prev = curr;
    for(int i=2;i<=k;i++){
        if(curr->next==head){
            cout<<"since it is end so "<<endl;
            return delete_at_end(head);
            prev = curr;
            curr = curr->next;
        }
    }
    prev->next = curr->next;
    delete curr;
    return head;
}
void display(node* head){
    node* curr = head;
    cout<<curr->data<<"->";
    curr = curr->next;
    while(curr!=head){
        cout<<curr->data<<"->";
        curr = curr->next;
    }
    cout<<"head"<<endl;
}
int main() {
    node* head = create_first_node(head);
    head = insert_at_head(head);
    display(head);
    head = insert_at_end(head);
    display(head);
    head = insert_at_end(head);
    head  = insert_at_k(head);
    display(head);
    head = delete_at_head(head);
    display(head);
    head = delete_at_end(head);
    display(head);
    head = delete_at_k(head);
    display(head);
    return 0;
}