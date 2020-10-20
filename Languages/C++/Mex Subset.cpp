/*PROBLEM
Given a set of integers (it can contain equal elements).

You have to split it into two subsets A and B (both of them can contain equal elements or be empty). You have to maximize the value of mex(A)+mex(B).

Here mex of a set denotes the smallest non-negative integer that doesn't exist in the set. For example:

mex({1,4,0,2,2,1})=3
mex({3,3,2,1,3,0,0})=4
mex(Ø)=0 (mex for empty set)
The set is splitted into two subsets A and B if for any integer number x the number of occurrences of x into this set is equal to the sum of the number of occurrences of x into A and the number of occurrences of x into B.

input
4
6
0 2 1 5 0 1
3
0 1 2
4
0 2 0 1
6
1 2 3 4 5 6


output
5
3
4
0
*/


#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;
bool desc(int x,int y)
{
    return x>y;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    cin>>T;
    while(T--)
    {
        int N,min1=0,min2=0;
        cin>>N;
        int A[N],H[101]={0};
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            H[A[i]]+=1;
        }
        if(H[0]>1)
        {
            int flag=0;
            for(int i=1;i<101;i++)
            {
                if(H[i]>1)
                {
                    continue;
                }
                else
                {
                    if(flag==0)
                    {
                        if(H[i]==1)
                        {
                            min1=i;
                            flag=1;
                        }
                        else
                        {
                            min1=i;
                            min2=i;
                            i=N;
                            break;
                        }
                    }
                    else
                    {
                        if(H[i]==0)
                        {
                            min2=i;
                            i=N;
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
        }
        else if(H[0]==1)
        {
            for(int i=1;i<101;i++)
            {
                if(H[i]==0)
                {
                    min1=i;
                    break;
                }
            }
        }
        cout<<min1+min2<<endl;
    }
}

