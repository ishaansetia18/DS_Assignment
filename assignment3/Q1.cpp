#include<iostream>
using namespace std;
int main(){
    int a[20];
    int pt = -1;
    int n=0;
    while(n!=7){
        cout<<"enter 1 to push element in stack "<<endl;
        cout<<"enter 2 to pop element in stack "<<endl;
        cout<<"enter 3 to check isEmpty in stack "<<endl;
        cout<<"enter 4 to is Full in stack "<<endl;
        cout<<"enter 5 to display stack "<<endl;
        cout<<"enter 6 to peek in stack "<<endl;
        cout<<"enter 7 to quit program "<<endl;
        cout<<"enter your choice ";
        cin >> n;
        switch(n){
            case 1:
                if(pt!=19){
                    cout<<"insert element at stack ";
                    cin >> a[++pt];
                }
                else cout<<"stack is full"<<endl;
                break;
            case 2:
                if(pt!=-1){ 
                    cout<<"element is pop out from top which is "<<a[pt]<<endl;
                    pt--;
                }
                else cout<<"stack is null"<<endl;
                break;
            
            case 3:
                if(pt!=-1) cout<<"stack is not empty"<<endl;
                else cout<<"stack is empty"<<endl;
                break;
            case 4:
                if(pt!=19) cout<<"stack have space"<<endl;
                else cout<<"stack is full"<<endl;
                break;
            case 5:
                for(int i=0;i<=pt;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                break;
            case 6:
                cout<<"element at top is ";
                cout<<a[pt]<<endl;
                break;
            case 7:
                cout<<"exiting the program "<<endl;
            default:
                cout<<"invalid input "<<endl;
        }
    }
    return 0;
}