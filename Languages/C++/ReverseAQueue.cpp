#include<iostream>
#include<queue>
#include<iterator>
using namespace std;

void Reverse(queue<int> &q){
    queue<int>::iterator it;
    if(it==q.end())
        return *it;
    else {
        Reverse(it++);
        return *it;
    }
}
int main(){
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        q.push(val);
    }
    Reverse(q);
}
