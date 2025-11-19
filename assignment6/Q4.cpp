#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int data,node* next = nullptr,node* prev=nullptr){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};
node* create_linkedList(node* head,int a[],int n){
    node* curr = head;
    for(int i=1;i<n;i++){
        node* temp = new node(a[i]);
        curr->next = temp;
        temp->prev = curr;
        curr = curr->next;
    }
    return head;
}
bool question(node* head,int n){
    node* curr1 = head;
    node* curr2 = head;
    while(curr2->next!=nullptr){
        curr2 = curr2->next;
    }
    int i=1,j=n;
    while(i<=j){
        if(curr1->data!=curr2->data){
            return false;
        }
        curr1 = curr1->next;
        curr2 = curr2->prev;
        i++;j--;
    }
    return true;
}
int main(){
    int a[] = {1,2,3,2,1};
    node* head = new node(a[0]);
    head = create_linkedList(head,a,5);
    int ans = question(head,5);
    if(ans==1) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    delete[] head;
    return 0;
}