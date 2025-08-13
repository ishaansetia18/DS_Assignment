#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter number of rows and columns of 2d matrix"<<endl;
    cin >> r>>c;
    int a[r][c];
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"enter element at index ("<<i<<","<<j<<") ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"tanspose of matrix "<<endl;
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}