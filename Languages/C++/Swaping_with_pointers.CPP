#include<iostream.h>
#include<conio.h>
void exchange(int *p,int *r)
{
 int temp;
 temp=*p;
 *p=*r;
 *r=temp;
}
void main()
{ clrscr();
  int x,y;
  cout<<"\nEnter Value of x : ";
  cin>>x;
  cout<<"\nEnter Value of y : ";
  cin>>y;
  cout<<"\nOriginal Values are : - \n"<<"x = "<<x<<"\t"<<"y = "<<y<<endl;
  exchange(&x,&y);
  cout<<"\nExchanged Values are : -\n"<<"x = "<<x<<"\t"<<"y = "<<y<<endl;
  getch();
}