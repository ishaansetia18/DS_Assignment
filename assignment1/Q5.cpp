#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter number of rows and columns of 2d matrix"<<endl;
    cin>>r>>c;
    int a[r][c];
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"enter element at index ("<<i<<","<<j<<") ";
            cin>>a[i][j];
        }
    }
    int s1[r],s2[c];
    for(i=0;i<r;i++){
        s1[i] = 0;
        for(j=0;j<c;j++){
            s1[i] += a[i][j];
        }
    }
    for(i=0;i<c;i++){
        s2[i] = 0;
        for(j=0;j<r;j++){
            s2[i] += a[j][i];
        }
    }
    cout<<"sum of every rows"<<endl;
    for(i=0;i<r;i++){
        cout<<"sum of row "<<+1<<" = "<<s1[i]<<endl;
    }
    cout<<"\nsum of every column"<<endl;
    for(i=0;i<c;i++){
        cout<<"sum of column "<<i+1<<" = "<<s2[i]<<endl;;
    }
    return 0;
}
