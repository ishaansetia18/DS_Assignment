#include<iostream>
#include<string>
using namespace std;
void upper_to_lower(string& s){
    for(int i=0;i<s.length();i++){
        if(s[i]<'Z'&& s[i]!=' '){
            s[i]+=32;
        }
    }
}
int main(){
    string s;
    cout<<"enter a string ";
    getline(cin,s);
    upper_to_lower(s);
    cout<<"convert string to lower case "<<endl;
    cout<<s;
    return 0;
}