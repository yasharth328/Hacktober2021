#include<iostream.h>
#include<conio.h>
void row_sum(int B[3][3])
{ int r=0;
  cout<<"Row Sum :- \n";
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    { r+=B[i][j];
    }
     cout<<"Row "<<i+1<<" : "<<r;
     cout<<endl;
     r=0;
  }
}

void column_sum(int B[3][3])
{ int c=0;
  cout<<"Column Sum :- \n";
  for(int j=0;j<3;j++)
  {
    for(int i=0;i<3;i++)
    {  c+=B[i][j];
    }
     cout<<"Column "<<j+1<<" : "<<c;
     cout<<endl;
     c=0;
  }
}

void diagonal_sum(int B[3][3])
{  int d1=0,d2=0;
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
     {	if(i==j)
	  d1+=B[i][j];
	if(i+j==2)
	  d2+=B[i][j];
     }
   }
  cout<<"Diagonal Sum :- \n";
  cout<<"Diagonal 1 : "<<d1<<endl;
  cout<<"Diagonal 2 : "<<d2<<endl;
}

void show_matrix(int B[3][3])
{  cout<<"The Matrix is :-\n";
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
     {	cout<<B[i][j]<<"  ";
     }
     cout<<endl;
   }
}

void read_matrix(int A[3][3])
{
  cout<<"\nEnter Array Elements for 3X3 Matrix : ";
  for(int i=0;i<3;i++)
  { for(int j=0;j<3;j++)
    {  cin>>A[i][j];
    }
  }
    show_matrix(A);
}
void choice(char ch,int M[3][3])
{
  switch (ch)
  {
    case '1' : row_sum(M);break;
    case '2' : column_sum(M);break;
    case '3' : diagonal_sum(M);break;
    default  : cout<<" Invalid Choice ";
  }
}
void main ()
{ clrscr();
  int M[3][3];
  char ch;
  cout<<"\n\t\t*-*-*-*-*-*-*-*-*-*-MENU-*-*-*-*-*-*-*-*-*-*\t\t\n";
  cout<<"\n1.Row Sum ";
  cout<<"\n2.Column Sum ";
  cout<<"\n3.Diagonal Sum ";
  cout<<"\nEnter your choice : ";
  cin>>ch;
  read_matrix(M);
  choice(ch,M);
  getch();
}
 
