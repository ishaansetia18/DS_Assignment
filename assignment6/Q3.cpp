#include<iostream>
using namespace std;
class dbnode{
    public:
    int data;
    dbnode* prev;
    dbnode* next;
    dbnode(int data, dbnode* prev=nullptr,dbnode* next = nullptr){
        this->data = data;
        this->prev=prev;
        this->next = next;
    }
};
class cirnode{
  public:
  int data;
  cirnode* next;
  cirnode(int data,cirnode* next=nullptr){
      this->data = data;
      this->next = next;
  }
};
cirnode* create_circular_linkedList(int a[],int n){
    cirnode* head = new cirnode(a[0]);
    cirnode* curr = head;
    for(int i=1;i<n;i++){
        cirnode* temp = new cirnode(a[i]);
        curr->next = temp;
        curr = curr->next;
    }
    curr->next = head;
    return head;
}
dbnode* create_doubly_linkedList(int a[],int n){
    dbnode* head = new dbnode(a[0]);
    dbnode* curr = head;
    for(int i=1;i<n;i++){
        dbnode* temp = new dbnode(a[i]);
        curr->next = temp;
        temp->prev = curr;
        curr = curr->next;
    }
    return head;
}
void questionA(dbnode* head){
    int s=0;
    dbnode* curr = head;
    while(curr!=nullptr){
        s++;
        curr = curr->next;
    }
    cout<<"size of doubly linked list is "<<s<<endl;
    return;
}
void questionB(cirnode* head){
    cirnode* curr = head;
    int s=1;
    while(curr->next!=head){
        s++;
        curr = curr->next;
    }
    cout<<"size of circular linked list is "<<s<<endl;
    return;
}
int main(){
    int a1[] = {1,2,3,4,5,6};
    int a2[] = {3,4,5,6,7,8,9};
    dbnode* head1 = create_doubly_linkedList(a1,6);
    questionA(head1);
    cirnode* head2 = create_circular_linkedList(a2,7);
    questionB(head2);
    return 0;
}