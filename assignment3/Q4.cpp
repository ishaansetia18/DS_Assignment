#include<iostream>
#include<string>
using namespace std;
void prec(string s){
    char c[s.length()];
    int top = -1;
    string ans;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'||s[i]=='-'||s[i]=='('||s[i]==')'||s[i]=='/'||s[i]=='*'){
            if(s[i]=='+'||s[i]=='-'){
                while(top!=-1 || s[top]!='('){
                    top--;
                }
                top++;
                c[top] = s[i];
            }
            else if(s[i]=='*'||s[i]=='/'){
                while(top!=-1||c[top]!='('||c[top]!='+'||c[top]!='-'){
                    top--;
                }
                top++;
                c[top] = s[i];
            }
            else if(s[i]=='('){
                top++;
                c[top] = s[i];
            }
            else{
                while(c[top]!='('){
                    top--;
                }
            }
        }
        else{
            top++;
            c[top] = s[i];
        }
    }
}
int main(){
    string s;
    cout<<"enter expression ";
    getline(cin,s);
    char stack[s.length()];
    prec(s);
    return 0;
}