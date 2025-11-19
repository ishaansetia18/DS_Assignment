#include<iostream>
#include<string>
using namespace std;
class CircularQueue{
    int* arr;
    int cap;
    int currSize = 0;
    int f,r;
    public:
    CircularQueue(int size){
        cap = size;
        arr = new int[cap];
        f = 0;
        r = -1;
    }
    void push(int data){
        if(currSize == cap){
            cout<<"CQ is Full "<<endl;
            return;
        }
        r = (r+1)%cap;
        arr[r] = data;
        currSize++;
        cout<<data<<" is pushed in CQ"<<endl;
    }
    void pop(){
        if(isEmpty()){
            cout<<"CQ is Empty "<<endl;
            return;
        }
        // cout<<arr[f]<<" is poped from CQ "<<endl;
        f = (f+1)%cap;
        currSize--;
    }
    int peek(){
        if(isEmpty()){
            cout<<"CQ is empty "<<endl;
            return -1;
        }
        return arr[f];
    }
    bool isEmpty(){
        return currSize == 0;
    }
};
int main(){
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.pop();
    while(!cq.isEmpty()){
        cout<<cq.peek()<<" ";
        cq.pop();
    }
    return 0;
}