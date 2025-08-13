#include<iostream>
using namespace std;
void createarray(int arr[],int &n){
    cout<<"enter size of array"<<endl;
    cin >> n;
    for(int i=0;i<n;i++){
        cout<<"enter element at index "<<i<<endl;
        cin >> arr[i];
    }
}
int main(){
    int size;
    int arr[size];
}