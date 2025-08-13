#include<iostream>
using namespace std;
void creatarray(int* a[],int &r,int &c){
    cout<<"enter number of rows and comlumns"<<endl;
    cin >> r>>c;
    int a[r][c];
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"enter element of array at index ("<<i<<","<<j<<")"<<endl;
            cin>>a[i][j];
        }
    }
}
void matrixMultiplication(int* a[],int r1,int c1,int* b[],int r2,int c2){
    int m[r1][c2];
    if(c1 == r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c2;k++){
                    m[i][j] += a[i][k]*b[k][j];
                }
            }
        }
    }
    else{
        cout<<"Invalid dimensions for matrix multiplitcation";
    }
    cout<<"multiplication of matrix is"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<m[i][j];
        }
    }
}
int main(){
    int r1,c1;
    cout<<"enter number of rows and comlumns for first matrix"<<endl;
    cin >> r1>>c1;
    int arr1[r1][c1];
    int r2,c2;
    cout<<"enter number of rows and comlumns"<<endl;
    cin >> r2>>c2;
    int arr1[r2][c2];
    int res;
    // matrixMultiplication(arr1,r1,c1,arr2,r2,c2);
    return 0;
}