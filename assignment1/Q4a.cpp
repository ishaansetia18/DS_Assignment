#include<iostream>
using namespace std;
// reverse the elements of an array
void reverse_array(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
void display_array(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        if(i==0 && n==1) cout<<"{"<<arr[i]<<"}";
        else if(i==0) cout<<"{"<<arr[i]<<",";
        else if(i==n-1 && i>0) cout<<arr[i]<<"}";
        else cout<<arr[i]<<",";
    }
}
int main(){
    int size;
    cout<<"enter number of elements in array"<<endl;
    cin >> size;
    int arr[size];

    int i;
    for(i=0;i<size;i++){
        cout<<"enter element of array at index "<<i<<endl;
        cin >> arr[i];
    }
    reverse_array(arr,size);
    display_array(arr,size);
    return 0;
}