#include<iostream>
#include<cmath>

using namespace std;

bool SolveQuad(int a,int b,int c,float &x1,float &x2)
{
    float d=b*b-4*a*c;
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    if(d<0)
        return false;
    else
        return true;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    float x1,x2;
    bool d=SolveQuad(a,b,c,x1,x2);
    if(!d)
        cout<<"imaginary";
    else if(x1==x2 && d==true)
        cout<<"real and equal"<<"\n"<<x1<<" "<<x2<<endl;
    else
        cout<<"Real and Distinct"<<"\n"<<x1<<" "<<x2<<endl;
}
