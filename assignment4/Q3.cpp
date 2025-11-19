#include <iostream>
using namespace std;
class interleave{
    int* arr;
    int r,f;
    int cap;
    public:
    interleave(int size){
        cap = size/2;
        r = -1;
        f = 0;
        arr = new int[cap];
    }
    void push(int a[],int size){
        for(int i=size-cap;i<size;i++){
            r++;
            arr[r] = a[i];
        }
    }
    void display(int a[],int size){
        int i=0;
        while(i<size-cap){
            cout<<a[i]<<" ";
            i++;
            if(f<=r){
                cout<<arr[f]<<" ";
                f++;
            }
        }
    }
    
};
int main(){
    int a[] = {4,7,11,20,5,9};
    int s = 6;
    interleave l1(s);
    l1.push(a,s);
    l1.display(a,s);
    return 0;
}