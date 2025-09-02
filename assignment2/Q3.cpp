#include<iostream>
using namespace std;
void missing_ele(int a[],int n){
    for(int i=0;i<n;i++){
        if(i+1 != a[i]){
            cout<<"element is missing at index "<<i<<endl;
            cout<<i+1<<" element is missing"<<endl;
            break;
        }
    }
}
int main(){
    int a[] = {1,2,3,4,6,7,8,9};
    missing_ele(a,sizeof(a));
    return 0;
}