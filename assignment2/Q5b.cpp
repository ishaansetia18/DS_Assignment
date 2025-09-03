#include<iostream>
using namespace std;
// 3*n-2 -> size of array (by calculation)
// |i-j| == 0|1|-1 -> value stored (condition)
void tri_diagonal(int a[],int size){
    int pt = 0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i-j==0 || i-j==1 || i-j==-1){
                cout<<"insert non zero value at index ("<<i<<","<<j<<") ";
                cin>>a[pt];
                pt++;
            }
        }
    }
}
void display_matrix(int a[],int size){
    int pt = 0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i-j==0 || i-j==1 || i-j==-1){
                cout<<a[pt]<<" ";
                pt++;
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the dimensions of matrix "<<endl;
    cin >> n;
    int a[3*n-2];
    tri_diagonal(a,n);
    display_matrix(a,n);
    return 0;
}