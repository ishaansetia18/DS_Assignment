#include<iostream>
using namespace std;
void upper_triangular(int a[],int size){
    cout<<"insert non zero values of matrix row wise "<<endl;
    for(int i=0;i<(size*(size+1))/2;i++){
        cin>>a[i];
    }
}
int main(){
    int n;
    cout<<"enter the dimensions of matrix "<<endl;
    cin >> n;
    int pt=0;
    int a[(n*(n+1))/2];
    upper_triangular(a,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                cout<<a[pt]<<" ";
                pt++;
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}