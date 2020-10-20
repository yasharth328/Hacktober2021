#include<iostream.h>
#include<conio.h>
void middle(int B[][40],int n)
{  cout<<"\nMiddle Row is:"<<endl;
   for (int i=0;i<n;i++)
   {  for(int j=0;j<n;j++)
      {	 if (i== n/2)
	cout<<B[i][j]<<" ";
      }
   }
   cout<<"\nMiddle Column is:"<<endl;
   for (i=0;i<n;i++)
   {  for(int j=0;j<n;j++)
      {  if(j==n/2)
	   cout<<B[i][j]<<" ";
      }
   }
}
void display_matrix(int B[][40],int n)
{  cout<<"\nThe Matrix is :- "<<endl;
   for(int i=0;i<n;i++)
   {  for(int j=0;j<n;j++)
      { cout<<B[i][j]<<" ";
      }
      cout<<endl;
   }
}
void read_matrix()
{
  int size,A[40][40];
  cout<<"\nEnter Odd Size Of Square Matrix : ";
  cin>>size;
  cout<<"\nEnter The Matrix Elements : ";
  for(int i=0;i<size;i++)
  {  for(int j=0;j<size;j++)
     { cin>>A[i][j];
     }
  }
  display_matrix(A,size);
  middle(A,size);
}
void main()
{ clrscr ();
  read_matrix();
  getch();
}

