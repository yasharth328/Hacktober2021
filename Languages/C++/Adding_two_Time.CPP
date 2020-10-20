#include<iostream.h>
#include<conio.h>
class Time
{  int hh,mm,ss;
  public:
   void Readtime(int h,int m,int s)
   {  hh=h; mm=m; ss=s;
   }
   void Showtime()
   {  cout<<hh<<":"<<mm<<":"<<ss;
   }
   void Addtime(Time,Time);
};
void Time::Addtime(Time t1,Time t2)
{  ss+=t1.ss+t2.ss;
   mm=ss/60;
   ss=ss%60;
   mm+=t1.mm+t2.mm;
   hh=mm/60;
   mm=mm%60;
   hh+=t1.hh+t2.hh;
}
void main()
{  clrscr();
  int h,m,s;
  Time t1,t2,t3;
  cout<<"\nEnter First Time :-\n";
  cout<<"\Enter hours,minutes,second : ";
  cin>>h>>m>>s;
  t1.Readtime(h,m,s);
  cout<<"\nEnter Second Time :-\n";
  cout<<"\nEnter hours,minutes,second : ";
  cin>>h>>m>>s;
  t2.Readtime(h,m,s);
  cout<<"\nFirst Time is ->  ";
  t1.Showtime();
  cout<<"\nSecond Time is -> ";
  t2.Showtime();
  t3.Addtime(t1,t2);
  cout<<"\nThe Total Time is ->> ";
  t3.Showtime();
  getch();
}

