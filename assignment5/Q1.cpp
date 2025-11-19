#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data1,node* next1 = nullptr){
        data = data1;
        next = next1;
    }
};
node* insert_at_head(node* head){
    int num;
    cout<<"enter value for new node at head ";
    cin>>num;
    node* temp = new node(num);
    if(head==nullptr){
        return temp;
    }
    temp->next = head;
    head = temp;
    return head;
}
node* insert_at_tail(node* head){
    int num;
    cout<<"enter value of node to insert at end ";
    cin>>num;
    node* temp = new node(num);
    if(head==nullptr){
        return temp;
    }
    node* current = head;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = temp;
    return head;
}
node* insert_at_k(node* head){
    int k;
    cout<<"enter position at which new node to be insert ";
    cin>>k;
    if(k<=0){
        cout<<"Invalid value of k "<<endl;
        return head;
    }
    else if(k==1){
        cout<<"since it is head so "<<endl;
        return insert_at_head(head);
    } 
    node* curr = head;
    for(int i=2;i<k;i++){
        if(curr->next==nullptr){
            cout<<"since value of k is more than size of nodes so it will insert at end "<<endl;
            return insert_at_tail(head);
        }
        curr = curr->next;
    }
    int num;
    cout<<"enter data value of new node to insert at position "<<k<<" ";
    cin>>num;
    node* newnode = new node(num);
    newnode->next = curr->next;
    curr->next = newnode;
    return head;
}
node* delete_at_head(node* head){
    if(head==nullptr){
        cout<<"node is already null "<<endl;
        return head;
    }
    node* temp = head;
    head = head->next;
    delete temp;
    cout<<"node at head is deleted and new node is updated "<<endl;
    return head;
}
node* delete_at_end(node* head){
    if(head==nullptr){
        cout<<"node is already empty "<<endl;
        return head;
    }
    node* curr = head;
    node* prev = curr;
    while(curr->next!=nullptr){
        prev = curr;
        curr = curr->next;
    }
    prev->next = nullptr;
    delete curr;
    cout<<"node is deleted at end and new node is updated "<<endl;
    return head;
}
node* delete_at_k(node* head){
    if(head==nullptr){
        cout<<"node is already null "<<endl;
        return head;
    }
    int k;
    cout<<"enter position as which node wants to delete ";
    cin>>k;
    if(k==1){
        return delete_at_head(head);
    }
    node* curr = head;
    node* prev = curr;
    for(int i=2;i<k;i++){
        if(curr->next == nullptr){
            cout<<"its already out of node so it delete from end "<<endl;
            return delete_at_end(head);
        }
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
    cout<<"node is deleted at position "<<k<<" and now updated node is "<<endl;
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
    node* head = new node(1);
    head = insert_at_head(head);
    head = insert_at_tail(head);
    head = insert_at_tail(head);
    display(head);
    head = insert_at_k(head);
    display(head);
    head = delete_at_head(head);
    display(head);
    head = delete_at_end(head);
    display(head);
    head = insert_at_k(head);
    display(head);
    head = delete_at_k(head);
    display(head);
    delete[] head;
    return 0;
}