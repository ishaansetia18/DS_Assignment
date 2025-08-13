#include<iostream>
using namespace std;
void createarray(int arr[],int &n){
    cout<<"enter size of array"<<endl;
    cin >> n;
    for(int i=0;i<n;i++){
        cout<<"enter element at index "<<i<<" of array"<<endl;
        cin>>arr[i];
    }
}
void displayarray(int arr[],int &n){
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<"{"<<arr[i]<<",";
        }
        else if(i==n-1){
            cout<<arr[i]<<"}";
        }
        else{
        cout<<arr[i]<<",";
        }
    }
}
void insertelement(int arr[],int &n){
    int r;
    cout<<"enter number of elements to insert in array"<<endl;
    cin >>r;
    for(int i=n;i<n+r;i++){
        cout<<"enter element at index "<<i<<endl;
        if(!(cin>>arr[i])){
            cout<< "Invalid input, PLease enter an integer."<<endl;
            cin.clear();
            cin.ignore(10000,'\n');
            i--;
        }
    }
    n = n+r;
}
void deletelement(int arr[],int &n){
    int pos;
    cout<<"enter index at which element of array to be deleted"<<endl;
    cin >> pos;
    if(pos>=0 && pos<n){
        for(int i=pos;i<n;i++){
            arr[i] = arr[i+1];
        }
        cout<<"element is deleted at index "<<pos<<endl;
        cout<<"new array has been created"<<endl;
    }       
}
void linearsearch(int arr[],int &n){
    int ele;
    cout<<"enter element to search "<<endl;
    cin>> ele;
    bool find = false;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cout<<"element found at index "<<i<<endl;
            find = true;
        }
    }
    if(find == false){
        cout<<"This element is not present in array"<<endl;
    }
}
int main(){
    int a;
    int max = 100;
    int arr[100];
    int choice;
    
    while(choice != 6){
        cout<<"\n-----MENU------\n";
        cout<<"1 -> To Create an array"<<endl;
        cout<<"2 -> To Display array"<<endl;
        cout<<"3 -> To Insert new element in array"<<endl;
        cout<<"4 -> To Delete element at any index"<<endl;
        cout<<"5 -> linear Search of element in array"<<endl;
        cout<<"6 -> To exit program"<<endl;
        cout << "enter your choice \n";
        cin >> choice;

        switch (choice)
        {
        case 1: createarray(arr,a); break;
        case 2: displayarray(arr,a); break;
        case 3: insertelement(arr,a); break;
        case 4: deletelement(arr,a); break;
        case 5: linearsearch(arr,a); break;
        case 6: cout<<"exiting the program !!"<<endl;
        default:
            cout<<"invalid choice\nPlease enter again\n";
            cin>>choice;
            break;
        }
    }
    return 0;
}