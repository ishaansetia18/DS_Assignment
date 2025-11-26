#include<iostream>
using namespace std;
class heap{
    public:
    int a[10];
    int size;
    heap(){
        a[0]=-1;
        size=0;
    }
    void createHeap(){
        int d;
        cout<<"enter Input data of heap \n"
        <<"-1 for exiting input function "<<endl;
        cin>>d;
        while(d!=-1 && size<=10){
            size++;
            a[size]=d;
            cin>>d;
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<a[i]<<" ";
        }
    }
    void heapmax(){
        for(int i=2;i<=size;i++){
            if(a[i]>a[i/2]){
                swap(a[i],a[i/2]);
            }
        }
    }
};
int main(){
    heap h1;

    return 0;
}