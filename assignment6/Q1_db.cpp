#include<iostream>
using namespace std;
class node{
    public:
      int data;
      node* prev;
      node* next;
      node(int data,node* prev=nullptr,node* next=nullptr){
          this->data = data;
          this->prev = prev;
          this->next = next;
    }
};
node* insert_at_head(node* head){
    int n;
    cout<<"enter data of node to insert at head ";
    cin >> n;
    node* temp = new node(n);
    if(head==nullptr){
        return temp;
    }
    temp->next = head;
    head->prev=temp;
    head=temp;
    return head;
}
node* insert_at_end(node* head){
    int n;
    cout<<"enter data of node to insert at head ";
    cin >> n;
    node* temp = new node(n);
    if(head==nullptr){
        return temp;
    }
    node* curr = head;
    while(curr->next!=nullptr){
        curr = curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
}
node* insert_at_k(node* head){
    int k;
    cout<<"enter position of new node ";
    cin>>k;
    if(k==1){
        cout<<"since k=1 so it is head, Hence  "<<endl;;
        return insert_at_head(head);
    }
    node* curr =head;
    for(int i=2;i<k;i++){
        if(curr->next==nullptr){
            cout<<"since it comes to end , so "<<endl;
            return insert_at_end(head);
        }
        curr = curr->next;
    }
    int n;
    cout<<"enter data value of new node ";
    cin>>n;
    node* temp = new node(n);
    temp->next = curr->next;
    curr->next->prev = temp;
    curr->next = temp;
    temp->prev=curr;
    return head;
}
node* delete_at_head(node* head){
    if(head==nullptr){
        cout<<"double linked list is already empty "<<endl;
        return head;
    }
    node* curr = head;
    node* temp =curr;
    curr = curr->next;
    delete temp;
    cout<<"node is deleted form head "<<endl;
    return curr;
}
node* delete_at_end(node* head){
    if(head==nullptr){
        cout<<"double linked list is already empty "<<endl;
        return head;
    }
    node* curr = head;
    node* prv = curr;
    while(curr->next!=nullptr){
        prv = curr;
        curr = curr->next;
    }
    prv->next=nullptr;
    delete curr;
    cout<<"node is deleted form end "<<endl;
    return head;
}
node* delete_at_k(node* head){
    int k;
    cout<<"enter postion of node to delete ";
    cin >> k;
    if(k==1){
        cout<<"k==1 so node is removed from head "<<endl;
        return delete_at_head(head);
    }
    node* curr = head;
    node* prv = curr;
    for(int i=2;i<=k;i++){
        if(curr->next==nullptr){
            cout<<"it comes to end so node is removed form the end "<<endl;
            return delete_at_end(head);
        }
        prv = curr;
        curr = curr->next;
    }
    prv->next = curr->next;
    curr->next->prev =prv;
    delete curr;
    cout<<"node is deleted from postion "<<k<<endl;
    return head;
}
void search_element(node* head){
    int k;
    cout<<"enter data value of node to search ";
    cin>>k;
    node* curr = head;
    int p=0;
    while(curr!=nullptr){
        if(curr->data==k){
            break;
        }
        else p++;
        curr = curr->next;
    }
    cout<<"element is found at position "<<p << endl;
    return;
}
void display(node* head){
    node* curr = head;
    while(curr!=nullptr){
        cout<<curr->data<<"->";
        curr= curr->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head = new node(2);
    head = insert_at_head(head);
    head = insert_at_head(head);
    display(head);
    head=insert_at_end(head);
    display(head);
    head=insert_at_k(head);
    display(head);
    // head = delete_at_head(head);
    // display(head);
    // head = delete_at_end(head);
    // display(head);
    // head = delete_at_k(head);
    // display(head);
    search_element(head);
    return 0;
}