#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
    for(int i=0;i<n;i++){
        int didswap = 0;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                didswap = 1;
            }
        }
        if(didswap == 0) break;
    }
    return;
}
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter element of array at index "<<i<<" ";
        cin>>a[i];
    }
    bubble_sort(a,n);
    cout<<"after bubble sort of an array "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}