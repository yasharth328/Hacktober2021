#include <iostream>
#include <stack>
using namespace std;


int main() {
    int arr[]={25,6,24,8};
    stack<int> s;
    
    int len= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        s.push(arr[i]);
    }
    
    while (!s.empty()) {
        cout << s.top()<< ' ' ;
        s.pop();
    }
}
