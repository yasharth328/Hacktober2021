#include <bits/stdc++.h>

using namespace std;


int main() 
{
    int n,s,i;
    cin>>s>>n;
    vector< pair <int,int> > d;
    for (int i=0; i<n; i++) 
    {
        int a,b;
        cin>>a>>b;
        d.push_back( make_pair(a,b) ); 
    }
    sort(d.begin(), d.end());
    for( i=0;i<n;i++)
    {
        if(s > d[i].first)
            s=s+d[i].second;
        else
            break;
    }
    if(i==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
        
    
    return 0;
}

