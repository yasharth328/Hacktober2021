#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cin.getline(str,100);
    int n;
    cin>>n;
    char a[n];
    int j=strlen(str);
    int k=0;
    for(int i=j-n;i<n;i++){
        a[k]=str[i];
        k++;
    }
    cout<<a<<endl;
}
