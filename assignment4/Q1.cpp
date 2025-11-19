#include<iostream>
#include<string>
using namespace std;
int main(){
    int a[20];
    int n;
    int top=-1;
    int pt = 0;
    while(n!=7){
        cout<<"enter 1 to enqueue "<<endl;
        cout<<"enter 2 to dequeue "<<endl;
        cout<<"enter 3 to check isEmpty() queue "<<endl;
        cout<<"enter 4 to check isFull() queue "<<endl;
        cout<<"enter 5 to display queue "<<endl;
        cout<<"enter 6 to peek in queue"<<endl;
        cout<<"enter 7 to exit the program "<<endl;
        cin >> n;
        switch(n){
            case 1:
            if(top<19){
                int x;
                cout<<"enter element to enqueue ";
                cin >> x;
                top++;
                a[top] = x;
            }
            else{
                cout<<"queue is full "<<endl;
            }
            break;
            case 2:
                if(top!=-1){
                    pt++;
                }
                else{
                    cout<<"queue is empty"<<endl;
                }
                break;
            case 4:
                if(top>18){
                    cout<<"queue is full "<<endl;
                }
                else{
                    cout<<"queue is not full "<<endl;
                }
                break;
            case 3:
                if(top<0){
                    cout<<"queue is empty "<<endl;
                }
                else{
                    cout<<"queue is not empty "<<endl;
                }
                break;
            case 5:
                while(pt<=top){
                    cout<<a[pt]<<" ";
                    pt++;
                }
                cout<<endl;
                pt = 0;
                break;
            case 6:
                if(top!=-1){
                    cout<<a[pt]<<endl;;
                }
                break;
            case 7:
                cout<<"exiting the program "<<endl;
                break;
            default:
                cout<<"invalid input ";
        }
    }
    return 0;
}