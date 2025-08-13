#include<iostream>
using namespace std;
void createarray(int a[],int &size){
    int i;
    for(i=0;i<size;i++){
        cout<<"enter element of array at index "<<i<<" "<<endl;
        cin>>a[i];
    }
}
int main(){
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int a[size];
    return 0;
}