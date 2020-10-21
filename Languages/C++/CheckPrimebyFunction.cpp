#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a==2) return true;
        if(a==3) return true;
        if(a%i==0)
            return false;
        }
     return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
    if(isPrime(i)) cout<<i<<" ";
    }
}
