#include<iostream>
#include<string>
using namespace std;
string concatenate(string s1 , string s2){
    return s1+s2;
}
string reverse_str(string s1){
    string reversed = "";
    for(int i=s1.length()-1;i>=0;i--){
        reversed += s1[i];
    }
    return reversed;
}
int main(){
    string a1,a2;
    cout<<"input first string ";
    getline(cin,a1);
    cout<<"input second string ";
    getline(cin,a2);
    string res = concatenate(a1,a2);
    cout<<"concatenate of two string is \n"<<res<<endl;
    string reverse  = reverse_str(a1);
    cout<<"reversed of first string is "<<endl;
    cout<<reverse;

    return 0;
}