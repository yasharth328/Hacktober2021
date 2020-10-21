#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str)
{
    stack<char> s;
    char ch;
    for (int i=0; i<str.length(); i++)
    {
        if (str[i]=='('||str[i]=='['||str[i]=='{')
        {
            s.push(str[i]);
            continue;
        }
        if (s.empty())
            return false;
        switch(str[i])
        {
        case ')':
            ch = s.top();
            s.pop();
            if (ch=='{' || ch=='[')
                return false;
            break;
        case '}':
            ch = s.top();
            s.pop();
            if (ch=='(' || ch=='[')
                return false;
            break;
        case ']':
            ch = s.top();
            s.pop();
            if (ch =='(' || ch == '{')
                return false;
            break;
        }
    }
    return (s.empty());
}
int main()
{
    string s;
    cin>>s;
    if (isBalanced(s))
        cout << "True"<<endl;
}
