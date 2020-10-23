#include <iostream>
#include <conio.h>
using namespace std;

int n,l=-1,r=-1,e;

bool Is_Empty(int dq[]);
bool Is_Full(int dq[]);
void Insert_Left(int dq[]);
void Insert_Right(int dq[]);
void Delete_Left(int dq[]);
void Delete_Right(int dq[]);
void Display(int dq[]);

int main()
{
    int a=1,c,i;
    bool b;
    cout<<"Enter the size of the deque:";
    cin>>n;
    int dq[n];

    for(i=0;i<n;++i)
    {
        dq[i]=0;
    }


    while(a)
    {
        cout<<"\n1.Insert left\n2.Insert right\n3.Delete left\n4.Delete right\n5.Display\n6.Is empty\n7.Is full\n8.Exit\nEnter choice:";
        cin>>c;
        switch(c)
        {
        case 1:
            {
                Insert_Left(dq);
                break;
            }
        case 2:
            {
                Insert_Right(dq);
                break;
            }
        case 3:
            {
                Delete_Left(dq);
                break;
            }
        case 4:
            {
                Delete_Right(dq);
                break;
            }
        case 5:
            {
                Display(dq);
                break;
            }
        case 6:
            {
                b=Is_Empty(dq);
                cout<<b;
                break;
            }
        case 7:
            {
                b=Is_Full(dq);
                cout<<b;
                break;
            }
        case 8:
            {
                a=0;
                break;
            }

        default:
            cout<<"Invalid choice";
        }
    }
    return 0;
}

bool Is_Empty(int dq[])
{
    if(l==-1 && r==-1)
        return true;
    else
        return false;
}

bool Is_Full(int dq[])
{
    if((l==0 && r==n-1) || (l==r+1))
        return true;
    else
        return false;
}

void Insert_Left(int dq[])
{
    if(Is_Full(dq))
       cout<<"Overflow\n";
    else
    {
        cout<<"Enter element";
        cin>>e;

        if(l==-1 || r==-1)
        {
            l=r=0;
            dq[r]=e;
        }
        else if(l==0)
        {
            l=n-1;
            dq[l]=e;
        }
        else
        {
            dq[--l]=e;
        }

        cout<<e<<" inserted\n";
    }
}

void Insert_Right(int dq[])
{
    if(Is_Full(dq))
        cout<<"Overflow\n";
    else
    {
        cout<<"Enter element";
        cin>>e;

        if(l==-1 || r==-1)
        {
            l=r=0;
            dq[r]=e;
        }
        else if(r==n-1)
        {
            r=0;
            dq[r]=e;
        }
        else
        {
            dq[++r]=e;
        }

        cout<<e<<" inserted\n";
    }
}

void Delete_Left(int dq[])
{
    if(Is_Empty(dq))
    {
        cout<<"Underflow\n";
    }
    else
    {
        if(l==r)
        {
            e=dq[l];
            dq[l]=0;
            l=r=-1;
        }
        else if(l==n-1)
        {
            e= dq[l];
            dq[l]=0;
            l=0;
        }
        else
        {
            e=dq[l];
            dq[l]=0;
            l++;
        }

        cout<<e<<" deleted\n";
    }
}

void Delete_Right(int dq[])
{
    if(Is_Empty(dq))
        cout<<"Underflow\n";
    else
    {
        if(l==r)
        {
            e=dq[l];
            dq[l]=0;
            l=r=-1;
        }
        else if(r==0)
        {
            e=dq[r];
            dq[r]=0;
            r=n-1;
        }
        else
        {
            e=dq[r];
            dq[r]=0;
            r--;
        }

        cout<<e<<" deleted\n";
    }
}

void Display(int dq[])
{
    int i;
    if(l>r)
    {
        for(i=l;i<n;++i)
        {
            cout<<dq[i]<<'\t';
        }
        for(i=0;i<=r;++i)
        {
            cout<<dq[i]<<'\t';
        }
    }
    else
    {
        for(i=l;i<=r;++i)
        {
            cout<<dq[i]<<'\t';
        }
    }
}
