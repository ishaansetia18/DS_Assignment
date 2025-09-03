#include<iostream>
#include<string>
using namespace std;
void reverse_string(string s,char a[]){
    for(int i=0;i<s.length();i++){
        a[i] = s[i];
    }
    for(int i=s.length()-1;i>=0;i--){
        cout<<a[i];
    }
}
int main(){
    string s;
    cout<<"enter a string: ";
    getline(cin,s);
    char a[s.length()];
    cout<<"reversed string is "<<endl;
    reverse_string(s,a);
    return 0;
}