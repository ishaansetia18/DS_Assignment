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
node* create_linkedList(int a[],int n){
    node* head = new node(a[0]);
    node* curr = head;
    for(int i=1;i<n;i++){
        node* temp = new node(a[i]);
        curr->next = temp;
        curr = curr->next;
    }
    curr->next = head;
    return head;
}
void question_display(node* head){
    node* curr = head;
    while(curr->next!=head){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<curr->data<<" ";
    curr = curr->next;
    cout<<curr->data<<endl;
}
int main(){
    int a[] = {20,100,40,80,60};
    node* head = new node(0);
    head = create_linkedList(a,5);
    question_display(head);
    return 0;
}