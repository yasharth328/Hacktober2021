#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> s;
    char a[100];
    cin>>a;
    int l=strlen(a);
    for(int i=0;i<l;i++){
        if(a[i]=='[' || a[i]=='{' || a[i]=='(')
            s.push(a[i]);
        else if(a[i]==')' && s.top()=='(')
            s.pop();
        else if(a[i]=='}' && s.top()=='{')
            s.pop();
        else if(a[i]==']' && s.top()=='[')
            s.pop();
    }
    if(s.empty()) cout<<"true";
        else cout<<"false";
}

