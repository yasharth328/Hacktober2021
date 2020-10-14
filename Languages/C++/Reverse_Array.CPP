//Program to Reverse an Array
//Contributed by Navdeep Singh


#include<iostream.h>
#include<conio.h>

void Reverse_array(int b[],int N)
{
  int temp,i,j;
  for(i=0,j=N-1;i<N/2;i++,j--)
  {
    temp=b[i];
    b[i]=b[j];
    b[j]=temp;
  }
   cout<<"\nReverse array is : "<<endl;
   for(i=0;i<N;i++)
   {
     cout<<b[i]<<" ";
   }
}
void main()
{
 clrscr();
 int a[40],n,i;
 cout<<"enter the size of array elemnts :";
 cin>>n;
 for(i=0;i<n;i++)
 {
   cout<<"enter element "<<i+1<<":";
   cin>>a[i];
 }
 Reverse_array(a,n);
 getch();
}

