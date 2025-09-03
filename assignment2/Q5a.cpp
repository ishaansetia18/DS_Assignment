#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter dimension of square matrix ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"insert element at index ("<<i<<","<<i<<") ";
        cin>>a[i];
    }
    cout<<"display of created diagonal matrix "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<a[i]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}