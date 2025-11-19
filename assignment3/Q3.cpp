#include <iostream>
#include<string>
using namespace std;
bool check_bal_prth(char a[],string &s){
    int top = 0,pt = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[' ){
            a[top] = s[i];
            top++;
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
            if(s[i]==')'&&a[pt]!='('){ return false;}
            else if(s[i]=='}' && a[pt]!='{') {return false;}
            else if(s[i]=='[' && a[pt]!=']') {return false;}
        }
        else pt++;
    }
    if(pt==top+1){
        return true;
    }
    else return false;
}
int main() {
    string exp;
    cout<<"enter expression ";
    getline(cin,exp);
    char stack[exp.length()];
    bool ans = check_bal_prth(stack,exp);
    cout<<ans;
    return 0;
}