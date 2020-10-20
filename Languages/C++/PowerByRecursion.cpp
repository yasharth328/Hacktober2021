#include<bits/stdc++.h>

using namespace std;

int Power(int x,int n){
    if(n==1) return x;
    return x*Power(x,n-1);
}

int main(){
    int x,n;
    cin>>x>>n;
    cout<<Power(x,n)<<endl;
}
