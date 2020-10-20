/*PROBLEM
Boboniu gives you

r red balls,
g green balls,
b blue balls,
w white balls.
He allows you to do the following operation as many times as you want:

Pick a red ball, a green ball, and a blue ball and then change their color to white.
You should answer if it's possible to arrange all the balls into a palindrome after several (possibly zero) number of described operations.



input
4
0 1 1 1
8 1 9 3
0 0 0 0
1000000000 1000000000 1000000000 1000000000


output
No
Yes
Yes
Yes
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int Arr[4],cte=0;
        for(int i=0;i<4;i++)
        {
            cin>>Arr[i];
        }
        for(int i=0;i<4;i++)
        {
            if(Arr[i]%2==0)
                cte+=1;
        }
        if(cte<3 && Arr[0]>0 && Arr[1]>0 && Arr[2]>0)
        {
            cte=0;
            Arr[0]-=1;
            Arr[1]-=1;
            Arr[2]-=1;
            Arr[3]+=3;
            for(int i=0;i<4;i++)
            {
                if(Arr[i]%2==0)
                    cte+=1;
            }
        }
        if(cte>=3)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
