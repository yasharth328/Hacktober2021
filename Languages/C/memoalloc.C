#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int *p,i,s,*ptr,*q,m;
 clrscr();
 printf("Enter the array size:\n");
 scanf("%d",&s);
 ptr= (int *)malloc(s * sizeof(int));
 p=ptr;
 for(i=0;i<s;i++)
 {
   printf("please enter a element:\n");
   scanf("%d",ptr);
   ptr++;
 }
 for(i=0;i<s;i++)
 {
   printf("\nThe elements are %d",*p);
   p++;
 }
 printf("\nAdd array size:");
 scanf("%d",&m);
 ptr=realloc(ptr, m);
 q=ptr;
 for(i=0;i<m;i++)
 {
  printf("Enter the elements:");
  scanf("%d",ptr);
  ptr++;
 }
 for(i=0;i<m;i++)
 {
  printf("\nThe elements are:%d",*q);
  q++;
 }
 getch();
}
