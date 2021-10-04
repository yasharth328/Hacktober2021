#include <bits/stdc++.h>
using namespace std;

bool zerosubarray(int arr[],int n)
{
    unordered_set<int>s;
    int presum=0;
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        if(presum==0)
            return true;
        if(s.find(presum)!=s.end())
            return true;
        s.insert(presum);
    }
    return false;
}



int main() {
    int arr[]={-3,4,-3,4,1,-5};
    int n=6;
    cout << zerosubarray(arr, n);

    return 0;
}
