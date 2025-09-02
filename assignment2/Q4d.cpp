#include<iostream>
using namespace std;
void string_sort(string& s){
    for(int i=0;i<s.length()-1;i++){
        int didswap = 0;
        for(int j=0;j<s.length()-2;j++){
            if(s[j]>s[j+1]){
                char ch = s[j];
                s[j] = s[j+1];
                s[j+1] = ch;
                didswap = 1;
            }
        }
        if(didswap == 0) break;
    }
}
int main(){
    string s;
    cout<<"input of string ";
    getline(cin,s);
    string_sort(s);
    cout<<s;
    return 0;
}